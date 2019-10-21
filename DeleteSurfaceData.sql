delimiter //
-- 删除断面，不影响记录表surface_data
create procedure DeleteSurfaceData(
in in_surface_name varchar(32),
in in_surface_no int,
out out_state bool
)
begin
	-- 更具断面名字删除断面
	if in_surface_name is not null and in_surface_no is null then
    begin
		-- 判断段面合法性
		if exists(select surface_name from surface_number where surface_name = in_surface_name) then
			delete from surface_number where surface_no = 
			(select surface_no from surface_number where surface_name = in_surface_name);
        end if;
        set out_state = true;
	end;
    -- 根据断面编号删除段面
	elseif in_surface_name is null and in_surface_no is not null then
    begin
		if exists(select surface_no from surface_number where surface_no = in_surface_no) then
			delete from surface_number where surface_no = in_surface_no;
        end if;
        set out_state = true;
	end;
	-- 当断面编号和断面名字都输入时，根据段m面编号删除断面
	elseif in_surface_name is not null and in_surface_no is not null then
    begin
		if exists(select surface_no from surface_number where surface_no = in_surface_no)
		and exists(select surface_name from surface_number where surface_name = in_surface_name) then
			delete from surface_number where surface_no = in_surface_no;
        end if;
        set out_state = true;
	end;
    -- 其他情况删除失败
    else
		set out_state = false;
    end if;
end
//
delimiter ;