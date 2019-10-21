delimiter //
-- 向表中插入数据
create procedure InsertSurfaceData -- 记录ID，断面编号，断面名，含沙量，流量，降雨量，流速，水位，时间戳，操作状态
(
in in_id varchar(32),
in in_surface_no int,
in in_surface_name varchar(32),
in in_water_sild float,
in in_out_flov float,
in in_rain_fall float,
in in_water_speed float,
in in_water_lvl float,
in in_time_point varchar(32),
out out_state bool
)
begin
	-- 断面存在标志，防止插入不存在的断面数据
	declare no_exists int default null;
    set no_exists = (select surface_no from surface_number where surface_no = in_surface_no);
    if no_exists is not null then
    begin
		insert into 
		surface_data(id,surface_no,surface_name,water_sild,out_flov,rain_fall,water_speed,water_lvl,time_point) 
		value
		(in_id,in_surface_no,in_surface_name,in_water_sild,in_out_flov,in_rain_fall,in_water_speed,in_water_lvl,in_time_point);
		set out_state = true;
    end;
    else
		set out_state = false;
	end if;
end
//
delimiter ;