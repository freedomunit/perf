save()
{
	lr_think_time(3);
	
	lr_rendezvous("save");

	lr_start_transaction("save");

	web_submit_data("zkau_47",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t57.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<save_uuid}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":18,\"pageY\":93,\"which\":1,\"x\":7,\"y\":7}", ENDITEM,
		LAST);

	web_submit_data("zkau_48",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t58.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":76,\"blockBottom\":77,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":76,\"rangeBottom\":121}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":76,\"blockBottom\":77,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":76,\"rangeBottom\":121}", ENDITEM,
		"Name=cmd_2", "Value=echo", ENDITEM,
		"Name=opt_2", "Value=i", ENDITEM,
		"Name=uuid_2", "Value=<uuid}", ENDITEM,
		"Name=data_2", "Value={\"\":[\"onSave\",0]}", ENDITEM,
		LAST);

	web_submit_data("zkau_49",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t59.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=echo", ENDITEM,
		"Name=opt_0", "Value=i", ENDITEM,
		"Name=uuid_0", "Value=<uuid}", ENDITEM,
		"Name=data_0", "Value={\"\":[\"onClearBusySpreadsheet\",0]}", ENDITEM,
		LAST);

	web_submit_data("zkau_50",
		"Action=<url}bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=<url}bin-java/efsnPackage.do_AllocationDailyTaskEntry",
		"Snapshot=t60.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":76,\"blockBottom\":77,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":76,\"rangeBottom\":121}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":76,\"blockBottom\":77,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":76,\"rangeBottom\":121}", ENDITEM,
		"Name=cmd_2", "Value=echo", ENDITEM,
		"Name=opt_2", "Value=i", ENDITEM,
		"Name=uuid_2", "Value=<uuid}", ENDITEM,
		"Name=data_2", "Value={\"\":[\"onSetFreezePaneAndImage\"]}", ENDITEM,
		LAST);

	lr_end_transaction("save",LR_AUTO);

	return 0;
}
