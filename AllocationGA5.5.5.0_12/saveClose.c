saveClose()
{
	lr_think_time(3);
	
	lr_rendezvous("saveeClose");

	lr_start_transaction("saveClose");

	web_submit_data("zkau_83",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t93.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=onCellFocus", ENDITEM,
		"Name=uuid_0", "Value=<uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"nl_sheet_12\",\"row\":0,\"col\":0}", ENDITEM,
		"Name=cmd_1", "Value=onClick", ENDITEM,
		"Name=uuid_1", "Value=<saveClose_uuid}", ENDITEM,
		"Name=data_1", "Value={\"pageX\":42,\"pageY\":97,\"which\":1,\"x\":10,\"y\":11}", ENDITEM,
		LAST);

/*Correlation comment - Do not change!  Original value='0.36669907063019247' Name ='dump_03' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=dump_03",
		//"RegExp=dump=(.*?)\",",
		"LB/RE=dump=",
		"RB/RE=\",",				
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("zkau_84",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t94.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":44,\"blockBottom\":87,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":44,\"rangeBottom\":181}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":44,\"blockBottom\":87,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":44,\"rangeBottom\":181}", ENDITEM,
		"Name=cmd_2", "Value=echo", ENDITEM,
		"Name=opt_2", "Value=i", ENDITEM,
		"Name=uuid_2", "Value=<uuid}", ENDITEM,
		"Name=data_2", "Value={\"\":[\"onHandleSaveClose\"]}", ENDITEM,
		LAST);

/*
	web_submit_data("comet_2",
		"Action=<url}bin-java/zkau/comet?dtid=<dtid}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t95.inf",
		"Mode=HTML",
		ITEMDATA,
		LAST);
*/

	web_submit_data("zkau_85",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t96.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=echo", ENDITEM,
		"Name=opt_0", "Value=i", ENDITEM,
		"Name=uuid_0", "Value=<uuid}", ENDITEM,
		"Name=data_0", "Value={\"\":[\"onClearBusySpreadsheet\",0]}", ENDITEM,
		LAST);

	web_submit_data("comet_3",
		"Action=<url}bin-java/zkau/comet?dtid=<dtid}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t97.inf",
		"Mode=HTML",
		ITEMDATA,
		LAST);

	web_url("efsnPackage.do_allocationCriteria_2",
		"URL=<url}bin-java/efsnPackage.do_allocationCriteria?allocationtype=allocationdailytask&dump=<dump_03}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t98.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("saveClose",LR_AUTO);

	return 0;
}
