editOptions()
{
	lr_think_time(3);
	
	lr_rendezvous("editOptions");


	lr_start_transaction("editOptions");

/*Correlation comment - Do not change!  Original value='jU0Qu' Name ='options_listbox' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=options_listbox",
		//"RegExp=\\['zul\\.sel\\.Listbox','(.*?)',\\{",
		"LB/RE=\\['zul\\.sel\\.Listbox','",
		"RB/RE=',\\{",			
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='jU0Q_6' Name ='checkbox_01' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=checkbox_01",
		//"RegExp=\\['zul\\.sel\\.Listitem','(.*?)',\\{",
		"LB/RE=\\['zul\\.sel\\.Listitem','",
		"RB/RE=',\\{",		
		"Ordinal=21",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='jU0Qy5' Name ='checkbox_02' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=checkbox_02",
		//"RegExp=\\['zul\\.sel\\.Listitem','(.*?)',\\{",
		"LB/RE=\\['zul\\.sel\\.Listitem','",
		"RB/RE=',\\{",		
		"Ordinal=20",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='jU0Qw5' Name ='checkbox_03' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=checkbox_03",
		//"RegExp=\\['zul\\.sel\\.Listitem','(.*?)',\\{",
		"LB/RE=\\['zul\\.sel\\.Listitem','",
		"RB/RE=',\\{",			
		"Ordinal=19",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='jU0Qu5' Name ='checkbox_04' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=checkbox_04",
		//"RegExp=\\['zul\\.sel\\.Listitem','(.*?)',\\{",
		"LB/RE=\\['zul\\.sel\\.Listitem','",
		"RB/RE=',\\{",			
		"Ordinal=18",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='jU0Qs5' Name ='checkbox_05' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=checkbox_05",
		//"RegExp=\\['zul\\.sel\\.Listitem','(.*?)',\\{",
		"LB/RE=\\['zul\\.sel\\.Listitem','",
		"RB/RE=',\\{",			
		"Ordinal=17",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='jU0Qo5' Name ='checkbox_06' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=checkbox_06",
		//"RegExp=\\['zul\\.sel\\.Listitem','(.*?)',\\{",
		"LB/RE=\\['zul\\.sel\\.Listitem','",
		"RB/RE=',\\{",			
		"Ordinal=15",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='jU0Qc5' Name ='checkbox_07' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=checkbox_07",
		//"RegExp=\\['zul\\.sel\\.Listitem','(.*?)',\\{",
		"LB/RE=\\['zul\\.sel\\.Listitem','",
		"RB/RE=',\\{",			
		"Ordinal=9",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='jU0Qa5' Name ='checkbox_08' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=checkbox_08",
		//"RegExp=\\['zul\\.sel\\.Listitem','(.*?)',\\{",
		"LB/RE=\\['zul\\.sel\\.Listitem','",
		"RB/RE=',\\{",			
		"Ordinal=8",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='jU0Q16' Name ='checkbox_09' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=checkbox_09",
		//"RegExp=\\['zul\\.sel\\.Listitem','(.*?)',\\{",
		"LB/RE=\\['zul\\.sel\\.Listitem','",
		"RB/RE=',\\{",			
		"Ordinal=22",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("zkau_30",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t39.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=onCellFocus", ENDITEM,
		"Name=uuid_0", "Value=<uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<sheetId}_18\",\"row\":0,\"col\":0}", ENDITEM,
		"Name=cmd_1", "Value=onOpenPanel", ENDITEM,
		"Name=uuid_1", "Value=<options_uuid}", ENDITEM,
		"Name=data_1", "Value={\"isOpen\":true}", ENDITEM,
		"Name=cmd_2", "Value=onClick", ENDITEM,
		"Name=uuid_2", "Value=<options_uuid}", ENDITEM,
		"Name=data_2", "Value={\"pageX\":400,\"pageY\":96,\"which\":1,\"x\":14,\"y\":10}", ENDITEM,
		LAST);

	web_submit_data("zkau_31",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t40.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":69,\"blockBottom\":77,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":69,\"rangeBottom\":121}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":69,\"blockBottom\":77,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":69,\"rangeBottom\":121}", ENDITEM,
		LAST);

//	//lr_think_time(62);

	web_submit_data("zkau_32",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t41.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=onAnchorPos", ENDITEM,
		"Name=uuid_0", "Value=<options_listbox}", ENDITEM,
		"Name=data_0", "Value={\"top\":350,\"left\":0}", ENDITEM,
		"Name=cmd_1", "Value=onSelect", ENDITEM,
		"Name=uuid_1", "Value=<options_listbox}", ENDITEM,
		"Name=data_1", "Value={\"items\":[\"<checkbox_01}\",\"<checkbox_02}\",\"<checkbox_03}\",\"<checkbox_04}\",\"<checkbox_05}\",\"<checkbox_06}\",\"<checkbox_07}\",\"<checkbox_08}\"],\"reference\":\"<checkbox_01}\",\"clearFirst\":false,\"selectAll\":true,\"pageX\":17,\"pageY\":489,\"which\":1,\"x\":6,\"y\":384}", ENDITEM,
		"Name=cmd_2", "Value=onClick", ENDITEM,
		"Name=uuid_2", "Value=<checkbox_01}", ENDITEM,
		"Name=data_2", "Value={\"pageX\":17,\"pageY\":489,\"which\":1,\"x\":6,\"y\":10}", ENDITEM,
		LAST);

	web_submit_data("zkau_33",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t42.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=onAnchorPos", ENDITEM,
		"Name=uuid_0", "Value=<options_listbox}", ENDITEM,
		"Name=data_0", "Value={\"top\":368,\"left\":0}", ENDITEM,
		"Name=cmd_1", "Value=onSelect", ENDITEM,
		"Name=uuid_1", "Value=<options_listbox}", ENDITEM,
		"Name=data_1", "Value={\"items\":[\"<checkbox_09}\",\"<checkbox_01}\",\"<checkbox_02}\",\"<checkbox_03}\",\"<checkbox_04}\",\"<checkbox_05}\",\"<checkbox_06}\",\"<checkbox_07}\",\"<checkbox_08}\"],\"reference\":\"<checkbox_09}\",\"clearFirst\":false,\"selectAll\":true,\"pageX\":20,\"pageY\":502,\"which\":1,\"x\":9,\"y\":397}", ENDITEM,
		"Name=cmd_2", "Value=onClick", ENDITEM,
		"Name=uuid_2", "Value=<checkbox_09}", ENDITEM,
		"Name=data_2", "Value={\"pageX\":20,\"pageY\":502,\"which\":1,\"x\":9,\"y\":5}", ENDITEM,
		LAST);

//	//lr_think_time(8);

	web_submit_data("zkau_34",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t43.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=onAnchorPos", ENDITEM,
		"Name=uuid_0", "Value=<options_listbox}", ENDITEM,
		"Name=data_0", "Value={\"top\":350,\"left\":0}", ENDITEM,
		"Name=cmd_1", "Value=onAnchorPos", ENDITEM,
		"Name=uuid_1", "Value=<options_listbox}", ENDITEM,
		"Name=data_1", "Value={\"top\":333,\"left\":0}", ENDITEM,
		"Name=cmd_2", "Value=onSelect", ENDITEM,
		"Name=uuid_2", "Value=<options_listbox}", ENDITEM,
		"Name=data_2", "Value={\"items\":[\"<checkbox_09}\",\"<checkbox_02}\",\"<checkbox_03}\",\"<checkbox_04}\",\"<checkbox_05}\",\"<checkbox_06}\",\"<checkbox_07}\",\"<checkbox_08}\"],\"reference\":\"<checkbox_01}\",\"clearFirst\":false,\"selectAll\":\"\",\"pageX\":19,\"pageY\":482,\"which\":1,\"x\":8,\"y\":377}", ENDITEM,
		"Name=cmd_3", "Value=onClick", ENDITEM,
		"Name=uuid_3", "Value=<checkbox_01}", ENDITEM,
		"Name=data_3", "Value={\"pageX\":19,\"pageY\":482,\"which\":1,\"x\":8,\"y\":3}", ENDITEM,
		LAST);

	web_submit_data("zkau_35",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t44.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=onAnchorPos", ENDITEM,
		"Name=uuid_0", "Value=<options_listbox}", ENDITEM,
		"Name=data_0", "Value={\"top\":368,\"left\":0}", ENDITEM,
		"Name=cmd_1", "Value=onAnchorPos", ENDITEM,
		"Name=uuid_1", "Value=<options_listbox}", ENDITEM,
		"Name=data_1", "Value={\"top\":333,\"left\":0}", ENDITEM,
		"Name=cmd_2", "Value=onSelect", ENDITEM,
		"Name=uuid_2", "Value=<options_listbox}", ENDITEM,
		"Name=data_2", "Value={\"items\":[\"<checkbox_02}\",\"<checkbox_03}\",\"<checkbox_04}\",\"<checkbox_05}\",\"<checkbox_06}\",\"<checkbox_07}\",\"<checkbox_08}\"],\"reference\":\"<checkbox_09}\",\"clearFirst\":false,\"selectAll\":\"\",\"pageX\":20,\"pageY\":502,\"which\":1,\"x\":9,\"y\":397}", ENDITEM,
		"Name=cmd_3", "Value=onClick", ENDITEM,
		"Name=uuid_3", "Value=<checkbox_09}", ENDITEM,
		"Name=data_3", "Value={\"pageX\":20,\"pageY\":502,\"which\":1,\"x\":9,\"y\":5}", ENDITEM,
		LAST);

//	lr_think_time(11);

	web_submit_data("zkau_36",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t45.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=onOpenPanel", ENDITEM,
		"Name=uuid_0", "Value=<options_uuid}", ENDITEM,
		"Name=data_0", "Value={\"isOpen\":false}", ENDITEM,
		LAST);

	web_submit_data("zkau_37",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t46.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":69,\"blockBottom\":77,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":69,\"rangeBottom\":121}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":69,\"blockBottom\":77,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":69,\"rangeBottom\":121}", ENDITEM,
		"Name=cmd_2", "Value=onCellSelection", ENDITEM,
		"Name=uuid_2", "Value=<uuid}", ENDITEM,
		"Name=data_2", "Value={\"sheetId\":\"<sheetId}_18\",\"type\":\"cell\",\"left\":0,\"top\":0,\"right\":22,\"bottom\":0}", ENDITEM,
		"Name=cmd_3", "Value=echo", ENDITEM,
		"Name=opt_3", "Value=i", ENDITEM,
		"Name=uuid_3", "Value=<uuid}", ENDITEM,
		"Name=data_3", "Value={\"\":[\"onSetFreezePaneAndImage\"]}", ENDITEM,
		"Name=cmd_4", "Value=echo", ENDITEM,
		"Name=opt_4", "Value=i", ENDITEM,
		"Name=uuid_4", "Value=<uuid}", ENDITEM,
		"Name=data_4", "Value={\"\":[\"onSetFreezePaneAndImage\"]}", ENDITEM,
		LAST);

	lr_end_transaction("editOptions",LR_AUTO);

	return 0;
}
