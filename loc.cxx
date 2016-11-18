#encoding "utf-8"

LocDescr -> AnyWord<kwtype="loc_descr">; // словарь дескрипторов (страна, город, ...)

Loc -> LocDescr<gram="sg"> interp(Object.Descr) Word<h-reg1> interp(Object.Name; Object.Type="LOC");

Root -> Loc;
