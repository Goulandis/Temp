delimiter //
-- 使用断面编号删除断面的时间戳数据，此存储过程不允许删除断面
create procedure DeleteSurfaceDataByNo(
in in_surface_no varchar(32),
in in_time_point_start varchar(32),
in in_time_point_end varchar(32),
out run_state bool
)
begin
	-- 判断断面是否合法
    if exists (select surface_no from surface_number) then
    begin
		declare num varchar(32) default null;
		-- 游标的结束标志
		declare done bool default false;
        -- 为主键id创建游标
		declare cur cursor for select id from surface_data where surface_no = in_surface_no;
        -- 将结束标志关联到游标
        declare continue handler for not found set done = true;
        -- 打开游标
        open cur;
        -- 创建循环过程
        delete_loop:loop
        -- 从游标结果集中取值到num
        fetch next from cur into num;
		-- 游标后移
        if done then
			leave delete_loop;
		end if;
        -- 循环语句
        begin
			-- 场景1-删除当前段面中某一时段的水文数据
			if in_time_point_start is not null and in_time_point_end is not null then
				delete from surface_data where id = num and ascii(time_point) >= ascii(in_time_point_start) 
					and ascii(time_point) <= ascii(in_time_point_end);
			-- 场景2-删除当前断面中某一时刻的水文数据
			elseif in_time_point_start is not null and in_time_point_end is null then
				delete from surface_data where id = num and time_point = in_time_point_start;
			end if;
		end;
        -- 结束循环
        end loop;
        set run_state = true;
	end;
	else
		set run_state = false;
	end if;
end
//
delimiter ;