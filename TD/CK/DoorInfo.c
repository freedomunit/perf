DoorInfo()
{
	int door_round = 0; //(atoi(lr_eval_string("<downloadDoorNum}"))-1)*2;
	lr_think_time(3);
	

	lr_start_transaction("loadAccountGroup");

/*Correlation comment - Do not change!  Original value='0.5956201793426464' Name ='dump_02' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=dump_02",
		"RegExp=dump=(.*?)'\\),",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);


	
	
	web_url("efsnPackage.do_doorInfoEntry",
		"URL=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_userGoHome?dump=1",
		"Snapshot=t5.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=zkau/view/z_ed6/w60Qn/0kp/0/ss_w60Qn_p0_sheet_1.css", ENDITEM,
		"URL=../javascript/zul.js?_=1479951131542", ENDITEM,
		"URL=zkau/web/_zv2015042817/js/zul.box.wpd", ENDITEM,
		"URL=zkau/web/_zv3.9.0/js/zss.wpd", ENDITEM,
		"URL=zkau/web/_zv2015042817/js/zul.utl.wpd", ENDITEM,
		"URL=zkau/web/_zv2015042817/js/zul.wnd.wpd", ENDITEM,
		"URL=zkau/web/_zv2015042817/js/zul.menu.wpd", ENDITEM,
		"URL=zkau/web/_zv2015042817/js/zul.tab.wpd", ENDITEM,
		"URL=zkau/web/_zv2015042817/js/zul.layout.wpd", ENDITEM,
		"URL=zkau/web/_zv2015042817/js/zul.inp.wpd", ENDITEM,
		"URL=zkau/web/_zv2015042817/js/zk.fmt.wpd", ENDITEM,
		"URL=zkau/web/_zv2015042817/js/zkex.inp.wpd", ENDITEM,
		"URL=../images/common/close_grey.gif", ENDITEM,
		"URL=zkau/web/zss/img/ui-menu.png", ENDITEM,
		"URL=zkau/web/zss/img/plus.png", ENDITEM,
		"URL=zkau/web/zss/img/control-stop-000-small.png", ENDITEM,
		"URL=zkau/web/zss/img/control-stop-270-small.png", ENDITEM,
		"URL=zkau/web/_zv2015042817/js/zkex.cmsp.wpd", ENDITEM,
		"URL=zkau/web/zss/img/edit-bold.png", ENDITEM,
		"URL=zkau/web/zss/img/edit-italic.png", ENDITEM,
		"URL=zkau/web/zss/img/paint-can-color.png", ENDITEM,
		"URL=zkau/web/zss/img/edit-color.png", ENDITEM,
		"URL=zkau/web/zss/img/border-bottom.png", ENDITEM,
		"URL=zkau/web/zss/img/edit-vertical-alignment-top.png", ENDITEM,
		"URL=zkau/web/zss/img/edit-alignment.png", ENDITEM,
		"URL=zkau/web/zss/img/edit-wrap.png", ENDITEM,
		"URL=zkau/web/zss/img/border-right.png", ENDITEM,
		"URL=zkau/web/zss/img/border-all.png", ENDITEM,
		"URL=zkau/web/zss/img/border.png", ENDITEM,
		"URL=zkau/web/zss/img/border-top.png", ENDITEM,
		"URL=zkau/web/zss/img/border-outside.png", ENDITEM,
		"URL=zkau/web/zss/img/border-left.png", ENDITEM,
		"URL=zkau/web/zss/img/border-inside.png", ENDITEM,
		"URL=zkau/web/zss/img/border-horizontal.png", ENDITEM,
		"URL=zkau/web/zss/img/edit-alignment-right.png", ENDITEM,
		"URL=zkau/web/zss/img/edit-vertical-alignment-middle.png", ENDITEM,
		"URL=zkau/web/zss/img/edit-vertical-alignment.png", ENDITEM,
		"URL=zkau/web/zss/img/border-vertical.png", ENDITEM,
		"URL=zkau/web/zss/img/edit-alignment-center.png", ENDITEM,
		"URL=zkau/web/_zv2015042817/js/zul.sel.wpd", ENDITEM,
		"URL=zkau/web/_zv2015042817/js/zul.mesh.wpd", ENDITEM,
		"URL=zkau/view/z_ed6/w60Qn/0kp/1/ss_w60Qn_p0_sheet_1.css", ENDITEM,
		"URL=zkau/view/z_ed6/w60Qn/0kp/2/ss_w60Qn_p0_sheet_3.css", ENDITEM,
		"URL=zkau/view/z_ed6/w60Qn/0kp/3/ss_w60Qn_p0_sheet_3.css", ENDITEM,
		"URL=zkau/view/z_ed6/w60Qn/0kp/4/ss_w60Qn_p0_sheet_3.css", ENDITEM,
		"URL=zkau/view/z_ed6/dwnmed-0/upt1/AccountAssignmentDownload_20161124-093837.xlsx", ENDITEM,
		"URL=zkau/view/z_ed6/dwnmed-1/j3o/AccoutGroupDownload_20161124-093915.xlsx", ENDITEM,
		"URL=zkau?dtid=z_ed6&cmd_0=rmDesktop&opt_0=i", ENDITEM,
		LAST);

	web_url("efsnPackage.do_logicalWorkflow_2",
		"URL=https://<url}/bin-java/efsnPackage.do_logicalWorkflow?dump=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t6.inf",
		"Mode=HTML",
		LAST);
		


/*Correlation comment - Do not change!  Original value='z_ed6' Name ='doorInfo_dtid' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=doorInfo_dtid",
		"RegExp=,\\{dt:'(.*?)',cu:",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='p0_sheet' Name ='doorInfo_sheetId' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=doorInfo_sheetId",
		"RegExp=,showToolbar:false,showFormulabar:false,maxRenderedCellSize:9000,sheetLabels:\\[\\{'id':'(.*?)_1','name':",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='w60Qi0' Name ='doorInfoOptions_uuid' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=doorInfoOptions_uuid",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'moptions'",
		"Ordinal=1", //7
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='w60Qe0' Name ='doorInfoFreezeBtn_uuid' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=doorInfoFreezeBtn_uuid",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'mfreezepane'",
		"Ordinal=1", //3
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='w60Qc0' Name ='doorInfoSave_uuid' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=doorInfoSave_uuid",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msave'",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='w60Qg0' Name ='downloadDoor_uuid' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=downloadDoor_uuid",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'mexcel2'",
		"Ordinal=1", //5
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='w60Qf0' Name ='downloadAssignment_uuid' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=downloadAssignment_uuid",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'mexcel1'",
		"Ordinal=1", //4
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='w60Qd0' Name ='doorSaveClose_uuid' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=doorSaveClose_uuid",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msaveclose'",
		"Ordinal=1",  //2
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='w60Qn' Name ='doorInfo_uuid' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=doorInfo_uuid",
		"RegExp=\\['zss\\.Spreadsheet','(.*?)',\\{id:",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

	web_url("do_loadZKTemplate",
		"URL=https://<url}/bin-java/zk/do_loadZKTemplate?dump=<dump_02}&f=doorinfo.zul&zk.redrawCtrl=page",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t7.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=/branding/7thonline/loader-whiteonblue.gif", "Referer=https://<url}/branding/7thonline/stylesheet.css", ENDITEM,
		"URL=../zkau/web/b34f6723/zul/less/font/fontawesome-webfont.woff?v=4.0.1", "Referer=https://<url}/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", ENDITEM,
		"URL=../zkau/web/b34f6723/zkstyle/zul/img/menu/zk-menu-sprite.png", "Referer=https://<url}/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", ENDITEM,
		"URL=../zkau/web/b34f6723/zkstyle/zul/img/menu/dl-spinner-button-bg.gif", "Referer=https://<url}/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", ENDITEM,
		LAST);

	web_submit_data("zkau",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t8.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSFetchActiveRange", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_1\",\"top\":131,\"left\":0,\"right\":27,\"bottom\":211}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":130}", ENDITEM,
		LAST);

//	lr_think_time(5);

	web_submit_data("zkau_2",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t9.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", ENDITEM,
		"Name=cmd_2", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_2", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_2", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", ENDITEM,
		"Name=cmd_3", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_3", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_3", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", ENDITEM,
		"Name=cmd_4", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_4", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_4", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", ENDITEM,
		LAST);

	lr_end_transaction("loadAccountGroup",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("loadOptions");

	web_submit_data("zkau_3",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t10.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onOpenPanel", ENDITEM,
		"Name=uuid_0", "Value=<doorInfoOptions_uuid}", ENDITEM,
		"Name=data_0", "Value={\"isOpen\":true}", ENDITEM,
		"Name=cmd_1", "Value=onClick", ENDITEM,
		"Name=uuid_1", "Value=<doorInfoOptions_uuid}", ENDITEM,
		"Name=data_1", "Value={\"pageX\":189,\"pageY\":70,\"which\":1,\"x\":14,\"y\":6}", ENDITEM,
		LAST);

	web_submit_data("zkau_4",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t11.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", ENDITEM,
		LAST);

	lr_end_transaction("loadOptions",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("returnFromOptions");

	web_submit_data("zkau_5",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t12.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onOpenPanel", ENDITEM,
		"Name=uuid_0", "Value=<doorInfoOptions_uuid}", ENDITEM,
		"Name=data_0", "Value={\"isOpen\":false}", ENDITEM,
		LAST);

	web_submit_data("zkau_6",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t13.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":211}", ENDITEM,
		LAST);

	lr_end_transaction("returnFromOptions",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("sortAccountGroup");

	web_submit_data("zkau_7",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t14.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onCellFocus", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_1\",\"row\":0,\"col\":0}", ENDITEM,
		LAST);

	web_submit_data("zkau_8",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t15.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onCellFocus", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_1\",\"row\":0,\"col\":3}", ENDITEM,
		"Name=cmd_1", "Value=onCellSelection", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_sheetId}_1\",\"type\":\"cell\",\"left\":3,\"top\":0,\"right\":3,\"bottom\":0}", ENDITEM,
		"Name=cmd_2", "Value=onZSSCellMouse", ENDITEM,
		"Name=uuid_2", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_2", "Value={\"type\":\"lc\",\"shx\":310,\"shy\":53,\"key\":\"\",\"sheetId\":\"<doorInfo_sheetId}_1\",\"row\":0,\"col\":3,\"mx\":329,\"my\":136}", ENDITEM,
		LAST);

	web_submit_data("zkau_9",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t16.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=echo", ENDITEM,
		"Name=opt_0", "Value=i", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"\":[\"onSort\",0]}", ENDITEM,
		LAST);

	web_submit_data("zkau_10",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t17.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onCellFocus", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_1\",\"row\":0,\"col\":3}", ENDITEM,
		"Name=cmd_1", "Value=echo", ENDITEM,
		"Name=opt_1", "Value=i", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"\":[\"onRebuild\",0]}", ENDITEM,
		LAST);

	web_submit_data("zkau_11",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t18.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=echo", ENDITEM,
		"Name=opt_0", "Value=i", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"\":[\"onClearBusySpreadsheet\",0]}", ENDITEM,
		LAST);

	web_submit_data("zkau_12",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t19.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSFetchActiveRange", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"top\":157,\"left\":0,\"right\":27,\"bottom\":237}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":156}", ENDITEM,
		LAST);

	web_submit_data("zkau_13",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t20.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onCellSelection", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"type\":\"cell\",\"left\":0,\"top\":1,\"right\":0,\"bottom\":1}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		"Name=cmd_2", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_2", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_2", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		"Name=cmd_3", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_3", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_3", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		LAST);

	lr_end_transaction("sortAccountGroup",LR_AUTO);

	lr_think_time(3);

	

	web_submit_data("zkau_14",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t21.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onCellFocus", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"row\":1,\"col\":0}", ENDITEM,
		"Name=cmd_1", "Value=onCellFocus", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"row\":1,\"col\":3}", ENDITEM,
		LAST);
	
	lr_start_transaction("freeze");

	web_submit_data("zkau_15",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t22.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onCellSelection", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"type\":\"cell\",\"left\":3,\"top\":1,\"right\":3,\"bottom\":1}", ENDITEM,
		"Name=cmd_1", "Value=onZSSCellMouse", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"type\":\"lc\",\"shx\":336,\"shy\":71,\"key\":\"\",\"sheetId\":\"<doorInfo_sheetId}_3\",\"row\":1,\"col\":3,\"mx\":355,\"my\":154}", ENDITEM,
		"Name=cmd_2", "Value=onCellFocus", ENDITEM,
		"Name=uuid_2", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_2", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"row\":1,\"col\":3}", ENDITEM,
		"Name=cmd_3", "Value=onClick", ENDITEM,
		"Name=uuid_3", "Value=<doorInfoFreezeBtn_uuid}", ENDITEM,
		"Name=data_3", "Value={\"pageX\":70,\"pageY\":72,\"which\":1,\"x\":7,\"y\":8}", ENDITEM,
		LAST);

	web_submit_data("zkau_16",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t23.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		"Name=cmd_2", "Value=echo", ENDITEM,
		"Name=opt_2", "Value=i", ENDITEM,
		"Name=uuid_2", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_2", "Value={\"\":[\"onFreeze\",0]}", ENDITEM,
		LAST);

	web_submit_data("zkau_17",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t24.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=echo", ENDITEM,
		"Name=opt_0", "Value=i", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"\":[\"onClearBusySpreadsheet\",0]}", ENDITEM,
		LAST);

	web_submit_data("zkau_18",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t25.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSFetchActiveRange", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"top\":157,\"left\":0,\"right\":27,\"bottom\":237}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":156}", ENDITEM,
		LAST);

	web_submit_data("zkau_19",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t26.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		LAST);

	lr_end_transaction("freeze",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("re-freeze");

	web_submit_data("zkau_20",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t27.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<doorInfoFreezeBtn_uuid}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":81,\"pageY\":75,\"which\":1,\"x\":18,\"y\":11}", ENDITEM,
		LAST);

	web_submit_data("zkau_21",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t28.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		"Name=cmd_2", "Value=echo", ENDITEM,
		"Name=opt_2", "Value=i", ENDITEM,
		"Name=uuid_2", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_2", "Value={\"\":[\"onFreeze\",0]}", ENDITEM,
		LAST);

	web_submit_data("zkau_22",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t29.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=echo", ENDITEM,
		"Name=opt_0", "Value=i", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"\":[\"onClearBusySpreadsheet\",0]}", ENDITEM,
		LAST);

	web_submit_data("zkau_23",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t30.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSFetchActiveRange", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"top\":157,\"left\":0,\"right\":27,\"bottom\":237}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":156}", ENDITEM,
		LAST);

	web_submit_data("zkau_24",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t31.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		"Name=cmd_2", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_2", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_2", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		"Name=cmd_3", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_3", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_3", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		LAST);

	web_submit_data("zkau_25",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t32.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		LAST);

	lr_end_transaction("re-freeze",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("saveAccountGroup");

	web_submit_data("zkau_26",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t33.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<doorInfoSave_uuid}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":25,\"pageY\":75,\"which\":1,\"x\":6,\"y\":11}", ENDITEM,
		LAST);

	web_submit_data("zkau_27",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t34.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		"Name=cmd_2", "Value=echo", ENDITEM,
		"Name=opt_2", "Value=i", ENDITEM,
		"Name=uuid_2", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_2", "Value={\"\":[\"onSave\",0]}", ENDITEM,
		LAST);

	web_submit_data("zkau_28",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t35.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=echo", ENDITEM,
		"Name=opt_0", "Value=i", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"\":[\"onClearBusySpreadsheet\",0]}", ENDITEM,
		LAST);

	web_submit_data("zkau_29",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t36.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":76,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		LAST);

	lr_end_transaction("saveAccountGroup",LR_AUTO);
	
	lr_save_int(door_round,"assignment_downloadNum");

	lr_start_transaction("downloadAssignment");

/*Correlation comment: Automatic rules - Do not change!  
Original value='upt1' 
Name ='assignment_xlsx' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=assignment_xlsx",
		"RegExp=dwnmed-<assignment_downloadNum}\\\\/(.*?)\\\\/AccountAssignmentDownload",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment - Do not change!  Original value='20161124-093837' Name ='assignment_date' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=assignment_date",
		"RegExp=AccountAssignmentDownload_(.*?)\\.xlsx",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("zkau_30",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t37.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<downloadAssignment_uuid}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":100,\"pageY\":74,\"which\":1,\"x\":10,\"y\":10}", ENDITEM,
		LAST);

	web_submit_data("zkau_30_1",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Mode=HTML",
		EXTRARES,
		"URL=zkau/view/<doorInfo_dtid}/dwnmed-<assignment_downloadNum}/<assignment_xlsx}/AccountAssignmentDownload_<assignment_date}.xlsx", "Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry", ENDITEM,
		LAST);
	
	lr_end_transaction("downloadAssignment",LR_AUTO);

	door_round++;
	lr_save_int(door_round,"door_downloadNum");

	lr_start_transaction("downloadAccountGroup");
	
/*Correlation comment: Automatic rules - Do not change!  
Original value='j3o' 
Name ='door_xlsx' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=door_xlsx",
		"RegExp=dwnmed-<door_downloadNum}\\\\/(.*?)\\\\/AccoutGroupDownload",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);
	

/*Correlation comment - Do not change!  Original value='20161124-093915' Name ='door_date' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=door_date",
		"RegExp=AccoutGroupDownload_(.*?)\\.xlsx",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("zkau_31",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t38.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<downloadDoor_uuid}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":130,\"pageY\":69,\"which\":1,\"x\":12,\"y\":5}", ENDITEM,
		LAST);
	
	web_submit_data("zkau_31_1",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Mode=HTML",
		EXTRARES,
		"URL=zkau/view/<doorInfo_dtid}/dwnmed-<door_downloadNum}/<door_xlsx}/AccoutGroupDownload_<door_date}.xlsx", "Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry", ENDITEM,
		LAST);	

	lr_end_transaction("downloadAccountGroup",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("dragDown");

	web_submit_data("zkau_32",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t39.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onCellFocus", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"row\":1,\"col\":3}", ENDITEM,
		LAST);

	web_submit_data("zkau_33",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t40.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":120,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		LAST);

	web_submit_data("zkau_34",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t41.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":120,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		LAST);

	web_submit_data("zkau_35",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t42.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSFetchActiveRange", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"top\":238,\"left\":0,\"right\":27,\"bottom\":309}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":171,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":237}", ENDITEM,
		LAST);

	web_submit_data("zkau_36",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t43.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":171,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":171,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", ENDITEM,
		"Name=cmd_2", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_2", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_2", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":212,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", ENDITEM,
		LAST);

	web_submit_data("zkau_37",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t44.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":212,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", ENDITEM,
		LAST);

	web_submit_data("zkau_38",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t45.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":267,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", ENDITEM,
		LAST);

	web_submit_data("zkau_39",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t46.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":267,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":309,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", ENDITEM,
		LAST);

	web_submit_data("zkau_40",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t47.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":309,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", ENDITEM,
		LAST);

	web_submit_data("zkau_41",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t48.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":309,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", ENDITEM,
		"Name=cmd_1", "Value=onZSSSyncBlock", ENDITEM,
		"Name=uuid_1", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_1", "Value={\"sheetId\":\"<doorInfo_uuid}\",\"dpWidth\":-1,\"dpHeight\":-1,\"viewWidth\":-1,\"viewHeight\":-1,\"blockLeft\":0,\"blockTop\":0,\"blockRight\":20,\"blockBottom\":309,\"fetchLeft\":-1,\"fetchTop\":-1,\"fetchWidth\":-1,\"fetchHeight\":-1,\"rangeLeft\":0,\"rangeTop\":0,\"rangeRight\":27,\"rangeBottom\":309}", ENDITEM,
		LAST);

	lr_end_transaction("dragDown",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("saveCloseAccountGroup");

	web_submit_data("zkau_42",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t49.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<doorInfo_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onCellFocus", ENDITEM,
		"Name=uuid_0", "Value=<doorInfo_uuid}", ENDITEM,
		"Name=data_0", "Value={\"sheetId\":\"<doorInfo_sheetId}_3\",\"row\":1,\"col\":3}", ENDITEM,
		"Name=cmd_1", "Value=onClick", ENDITEM,
		"Name=uuid_1", "Value=<doorSaveClose_uuid}", ENDITEM,
		"Name=data_1", "Value={\"pageX\":43,\"pageY\":70,\"which\":1,\"x\":3,\"y\":6}", ENDITEM,
		LAST);
/*
	web_submit_data("comet",
		"Action=https://<url}/bin-java/zkau/comet?dtid=<doorInfo_dtid}",
		"Method=POST",
		"TargetFrame=",
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry",
		"Snapshot=t50.inf",
		"Mode=HTML",
		ITEMDATA,
		LAST);
*/

/*Correlation comment - Do not change!  Original value='0.2705653695988235' Name ='dump_03' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=dump_03",
		"RegExp=dump=(.*?)\">Security\\ Setup",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_url("efsnPackage.do_userGoHome", 
		"URL=https://<url}/bin-java/efsnPackage.do_userGoHome", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://<url}/bin-java/efsnPackage.do_doorInfoEntry", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_url("efsnPackage.do_logicalWorkflow_3",
		"URL=https://<url}/bin-java/efsnPackage.do_logicalWorkflow?dump=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_userGoHome",
		"Snapshot=t52.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("saveCloseAccountGroup",LR_AUTO);

	return 0;
}
