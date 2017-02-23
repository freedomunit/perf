download()
{
	lr_think_time(3);
	
	lr_rendezvous("download");

	lr_start_transaction("download");

	web_submit_data("zkau_21",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t30.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<download_uuid}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":386,\"pageY\":93,\"which\":1,\"x\":10,\"y\":7}", ENDITEM,
		EXTRARES,
		"URL=zkau/web/b34f6723/zkstyle/zul/img/menu/dl-spinner-button-bg.gif", "Referer=<url}bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", ENDITEM,
		LAST);

	web_reg_save_param_ex(
		"ParamName=download_parameter",
		//"RegExp=dwnmed-0\\\\/(.*?)\\\\/allocatetemplate\\.xlsx\\.xlsx",
		"LB/RE=dwnmed-0\\\\/",
		"RB/RE=\\\\/allocatetemplate\\.xlsx\\.xlsx",			
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);		
		
	web_submit_data("zkau_22",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t31.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":45,\"blockBottom\":87,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":69,\"rangeBottom\":166}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":45,\"blockBottom\":87,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":69,\"rangeBottom\":166}", ENDITEM,
		"Name=cmd_2", "Value=echo", ENDITEM,
		"Name=opt_2", "Value=i", ENDITEM,
		"Name=uuid_2", "Value=<uuid}", ENDITEM,
		"Name=data_2", "Value={\"\":[\"onHandleDownload\"]}", ENDITEM,
		LAST);

	web_submit_data("zkau_23",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t32.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=echo", ENDITEM,
		"Name=opt_0", "Value=i", ENDITEM,
		"Name=uuid_0", "Value=<uuid}", ENDITEM,
		"Name=data_0", "Value={\"\":[\"onClearBusySpreadsheet\",0]}", ENDITEM,
		EXTRARES, 
		"Url=zkau/view/<dtid}/dwnmed-0/<download_parameter}/allocatetemplate.xlsx.xlsx", "Referer=<URL}bin-java/efsnPackage.do_AllocationDailyTaskEntry", ENDITEM, 		
		LAST);

//	lr_think_time(4);

	web_submit_data("zkau_24",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t33.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":45,\"blockBottom\":87,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":69,\"rangeBottom\":166}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":45,\"blockBottom\":87,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":69,\"rangeBottom\":166}", ENDITEM,
		"Name=cmd_2", "Value=echo", ENDITEM,
		"Name=opt_2", "Value=i", ENDITEM,
		"Name=uuid_2", "Value=<uuid}", ENDITEM,
		"Name=data_2", "Value={\"\":[\"onSetFreezePaneAndImage\"]}", ENDITEM,
		LAST);

	lr_end_transaction("download",LR_AUTO);	

	return 0;
}
