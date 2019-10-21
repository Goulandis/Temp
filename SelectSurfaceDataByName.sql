delimiter //
create procedure SelectSurfaceDataByName(
in in_surface_name varchar(32),
in in_time_point_start varchar(32),
in in_time_point_end varchar(32),
out out_state bool
)
begin
	if in_surface_name is not null then
    begin
		if exists(select surface_no from surface_number where surface_name = in_surface_name) then
        begin
			-- 场景1-只输入断面名字查询这个断面所有时间戳的水纹数据
			if in_time_point_start is null and in_time_point_end is null then
				select * from surface_data where surface_name = in_surface_name;
			-- 场景2-输入断面名字和某时见戳查询指定断面指定时间的水纹数据
			elseif in_time_point_start is not null and in_time_point_end is null then
				select * from surface_data where surface_name = in_surface_name and time_point = in_time_point_start;
			-- 场景3-输入断面名字和一个时间段查询这个时间段内这个断面的所有的水文数据
			elseif in_time_point_start is not null and in_time_point_end is not null then
				select * from surface_data where surface_name = in_surface_name and ascii(time_point) >= ascii(in_time_point_start)
				and ascii(time_point) <= ascii(in_time_point_end);
			else
				set out_state = false;
            end if;
            set out_state = true;
        end;
        else
			set out_state = false;
		end if;
    end;
	else -- 输入断面名为空时
    begin
		-- 场景2-输入断面名字和某时见戳查询指定断面指定时间的水纹数据
		if in_time_point_start is not null and in_time_point_end is null then
			select * from surface_data where time_point = in_time_point_start;
            -- 场景3-输入断面名字和一个时间段查询这个时间段内这个断面的所有的水文数据
		elseif in_time_point_start is not null and in_time_point_end is not null then
			select * from surface_data where ascii(time_point) >= ascii(in_time_point_start) and ascii(time_point) <= ascii(in_time_point_end);
		else
			set out_state = false;
		end if;
		set out_state = true;
    end;
    end if;
end;
//
delimiter ;

