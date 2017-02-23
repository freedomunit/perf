Security()
{
	int pageY,Y,n,r = 22;
	int security_round = 0; // (atoi(lr_eval_string("<downloadSecurityNum}"))-1)*4;
//	char str[];
		
	lr_think_time(3);
	
	lr_start_transaction("loadSecurity");

/*Correlation comment - Do not change!  Original value='0.6456625226919577' Name ='dump_04' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=dump_04",
		"RegExp=dump=(.*?)'\\),",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_url("efsnPackage.do_securityEntry",
		"URL=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_userGoHome",
		"Snapshot=t53.inf",
		"Mode=HTML",
		LAST);

	web_url("efsnPackage.do_logicalWorkflow_4",
		"URL=https://<url}/bin-java/efsnPackage.do_logicalWorkflow?dump=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t54.inf",
		"Mode=HTML",
		LAST);

/*Correlation comment - Do not change!  Original value='z_fd6' Name ='security_dtid' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=security_dtid",
		"RegExp=,\\{dt:'(.*?)',cu:",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Qy' Name ='newGroup_textBox' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=newGroup_textBox",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Q_0' Name ='newGroup_addBtn' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=newGroup_addBtn",
		"RegExp=\\['zul\\.wgt\\.Button','(.*?)',\\{",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Q20' Name ='renameGroup_dropdown' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=renameGroup_dropdown",
		"RegExp=\\['zul\\.sel\\.Select','(.*?)',\\{id:'lbrenamegroup',",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Q70' Name ='renameGroup_submit' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=renameGroup_submit",
		"RegExp=\\['zul\\.wgt\\.Button','(.*?)',\\{",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Q90' Name ='securityGroups_uuid' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=securityGroups_uuid",
		"RegExp=\\['zul\\.sel\\.Listbox','(.*?)',\\{id:'lb',",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Qpf' Name ='deleteGroup_uuid' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=deleteGroup_uuid",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'mdeleteselectedi'",
		"Ordinal=1",  //5
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Q41' Name ='group_header' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=group_header",
		"RegExp=\\['zul\\.sel\\.Listheader','(.*?)',\\{",
		"Ordinal=10",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Q51' Name ='user_header' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=user_header",
		"RegExp=\\['zul\\.sel\\.Listheader','(.*?)',\\{",
		"Ordinal=11",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Q61' Name ='login_header' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=login_header",
		"RegExp=\\['zul\\.sel\\.Listheader','(.*?)',\\{",
		"Ordinal=12",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);
		
/*Correlation comment - Do not change!  Original value='v71Q60' Name ='rename_textBox' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=rename_textBox",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Qw0' Name ='filterGroup_textBox' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=filterGroup_textBox",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=143",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Qr' Name ='security_tab_01' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=security_tab_01",
		"RegExp=\\['zul\\.tab\\.Tab','(.*?)',\\{id:",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/do_loadZKTemplate*",
		LAST);

	web_url("do_loadZKTemplate_2",
		"URL=https://<url}/bin-java/zk/do_loadZKTemplate?dump=<dump_04}&f=security.zul&zk.redrawCtrl=page&dump=<dump_03}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t55.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=../zkau/web/_zv2015042817/js/zhtml.wpd", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", ENDITEM,
		"URL=/javascript/zul.js?_=1479951685370", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", ENDITEM,
		"URL=/images/common/disabed_bg_stripe.png", "Referer=https://<url}/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", ENDITEM,
		"URL=../zkau/web/b34f6723/zkstyle/zul/img/common/bar-bg.png", "Referer=https://<url}/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", ENDITEM,
		LAST);

	lr_end_transaction("loadSecurity",LR_AUTO);

	lr_think_time(5);

	web_submit_data("zkau_43",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t56.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onChange", ENDITEM,
		"Name=uuid_0", "Value=<newGroup_textBox}", ENDITEM,
		"Name=data_0", "Value={\"value\":\"<groupName}\",\"start\":<groupNameLen}}", ENDITEM,
		LAST);

	lr_think_time(5);
	
	lr_rendezvous("newGroups");

	lr_start_transaction("newGroup");

/*Correlation comment - Do not change!  Original value='v71Q6h' Name ='renameGroup_option' Type ='Manual'*/
/*	web_reg_save_param_regexp(
		"ParamName=renameGroup_option",
		"RegExp=\\['zul\\.sel\\.Option','(.*?)',\\{",
		"Ordinal=20",  //20 test
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
	*/	

	web_reg_save_param_regexp(
		"ParamName=renameGroup_options",
		"RegExp=\\['zul\\.sel\\.Option','(.*?)',\\{",
		"Ordinal=all",  
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);		

	web_reg_save_param_regexp(
		"ParamName=renameGroup_optionsName",
//		"RegExp=\\['zul\\.sel\\.Option','(.*?)',\\{",
		"RegExp=\\{\\$\\$0onSwipe:true,\\$\\$0onAfterSize:true,label:'(.*?)'\\},\\[\\]\\]\\]",
		"Ordinal=all",  
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);	
	
	web_submit_data("zkau_44",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t57.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<newGroup_addBtn}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":343,\"pageY\":100,\"which\":1,\"x\":22,\"y\":11}", ENDITEM,
		LAST);

	lr_end_transaction("newGroup",LR_AUTO);	
	
	for(; r<= atoi(lr_eval_string("<renameGroup_optionsName_count}"));r++)

    {

        if(stricmp(lr_paramarr_idx("renameGroup_optionsName",r),lr_eval_string("<groupName}"))== 0 ){
        	lr_save_string(lr_paramarr_idx("renameGroup_options",r), "renameGroup_option");
        		
        }

           
	}	
	
	lr_think_time(5);

	web_submit_data("zkau_45",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t58.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onSelect", ENDITEM,
		"Name=uuid_0", "Value=<renameGroup_dropdown}", ENDITEM,
		"Name=data_0", "Value={\"items\":[\"<renameGroup_option}\"],\"reference\":\"<renameGroup_option}\"}", ENDITEM,
		LAST);

//	lr_think_time(9);
/*
	web_custom_request("zkau_46",
		"URL=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t59.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded;charset=UTF-8",
		"Body=dtid=<security_dtid}&cmd_0=onChange&uuid_0=v71Q60&data_0=%7B%22value%22%3A%22<groupName}%20rename%22%2C%22start%22%3A<renameLen}%7D",
		LAST);
*/
	web_submit_data("zkau_46",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t59.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onChange", ENDITEM,
		"Name=uuid_0", "Value=<rename_textBox}", ENDITEM,
		"Name=data_0", "Value={\"value\":\"<groupName}_rename\",\"start\":<renameLen}}", ENDITEM,
		LAST);

	lr_think_time(5);
	

	lr_start_transaction("renameGroup");

/*Correlation comment - Do not change!  Original value='v71Qbi0' Name ='deleteGroup_checkBox' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=deleteGroup_checkBoxs",
		"RegExp=\\['zul\\.sel\\.Listitem','(.*?)',\\{",
//		"Ordinal=240",  //240
		"Ordinal=all",  
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
		
	//	{$$0onSwipe:true,$$0onAfterSize:true,sclass:'firstrowcell',label:'(.*?)'},[]],
	web_reg_save_param_regexp(
		"ParamName=deleteGroup_checkLabels",
		"RegExp=\\{\\$\\$0onSwipe:true,\\$\\$0onAfterSize:true,sclass:'firstrowcell',label:'(.*?)'\\},\\[\\]\\],",
		"Ordinal=all",  
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);		

	web_submit_data("zkau_47",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t60.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<renameGroup_submit}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":855,\"pageY\":95,\"which\":1,\"x\":23,\"y\":6}", ENDITEM,
		LAST);

	lr_end_transaction("renameGroup",LR_AUTO);
	
	r = 242;
	for(n=21; n<= atoi(lr_eval_string("<deleteGroup_checkLabels_count}")); n++)

    {

        if(stricmp(lr_paramarr_idx("deleteGroup_checkLabels",n),lr_eval_string("<groupName}_RENAME"))== 0 ){
        	lr_save_string(lr_paramarr_idx("deleteGroup_checkBoxs",r), "deleteGroup_checkBox");
        	pageY = 437 + (n-20)*20;
        	Y = 322 + (n-20)*20;
        	lr_save_int(pageY, "deleteGroupRow_pageY");
        	lr_save_int(Y, "deleteGroupRow_Y");		
        }

          r++; 
	}		

	lr_think_time(5);

	web_submit_data("zkau_48",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t61.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onScrollPos", ENDITEM,
		"Name=uuid_0", "Value=<securityGroups_uuid}", ENDITEM,
		"Name=data_0", "Value={\"top\":133,\"left\":0}", ENDITEM,
		"Name=cmd_1", "Value=onScrollPos", ENDITEM,
		"Name=uuid_1", "Value=<securityGroups_uuid}", ENDITEM,
		"Name=data_1", "Value={\"top\":137,\"left\":0}", ENDITEM,
		"Name=cmd_2", "Value=onScrollPos", ENDITEM,
		"Name=uuid_2", "Value=<securityGroups_uuid}", ENDITEM,
		"Name=data_2", "Value={\"top\":139,\"left\":0}", ENDITEM,
		"Name=cmd_3", "Value=onScrollPos", ENDITEM,
		"Name=uuid_3", "Value=<securityGroups_uuid}", ENDITEM,
		"Name=data_3", "Value={\"top\":152,\"left\":0}", ENDITEM,
		"Name=cmd_4", "Value=onAnchorPos", ENDITEM,
		"Name=uuid_4", "Value=<securityGroups_uuid}", ENDITEM,
		"Name=data_4", "Value={\"top\":414,\"left\":0}", ENDITEM,
		"Name=cmd_5", "Value=onSelect", ENDITEM,
		"Name=uuid_5", "Value=<securityGroups_uuid}", ENDITEM,
//		"Name=data_5", "Value={\"items\":[\"<deleteGroup_checkBox}\"],\"reference\":\"<deleteGroup_checkBox}\",\"clearFirst\":false,\"selectAll\":true,\"pageX\":33,\"pageY\":437,\"which\":1,\"x\":14,\"y\":322}", ENDITEM,
		"Name=data_5", "Value={\"items\":[\"<deleteGroup_checkBox}\"],\"reference\":\"<deleteGroup_checkBox}\",\"clearFirst\":false,\"selectAll\":true,\"pageX\":33,\"pageY\":437,\"which\":1,\"x\":14,\"y\":322}", ENDITEM,
		LAST);

	lr_think_time(5);

	lr_start_transaction("deleteGroup");

	web_submit_data("zkau_49",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t62.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<deleteGroup_uuid}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":129,\"pageY\":73,\"which\":1,\"x\":17,\"y\":9}", ENDITEM,
		LAST);

	lr_end_transaction("deleteGroup",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("sortGroup");

	web_submit_data("zkau_50",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t63.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onScrollPos", ENDITEM,
		"Name=uuid_0", "Value=<securityGroups_uuid}", ENDITEM,
		"Name=data_0", "Value={\"top\":113,\"left\":0}", ENDITEM,
		"Name=cmd_1", "Value=onSort", ENDITEM,
		"Name=uuid_1", "Value=<group_header}", ENDITEM,
		"Name=data_1", "Value={\"\":true}", ENDITEM,
		LAST);

	lr_end_transaction("sortGroup",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("sortUser");

	web_submit_data("zkau_51",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t64.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onSort", ENDITEM,
		"Name=uuid_0", "Value=<user_header}", ENDITEM,
		"Name=data_0", "Value={\"\":true}", ENDITEM,
		LAST);

	lr_end_transaction("sortUser",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("sortLogin");

	web_submit_data("zkau_52",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t65.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onSort", ENDITEM,
		"Name=uuid_0", "Value=<login_header}", ENDITEM,
		"Name=data_0", "Value={\"\":true}", ENDITEM,
		LAST);

	lr_end_transaction("sortLogin",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("filterGroup");

	web_submit_data("zkau_53",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t66.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onChange", ENDITEM,
		"Name=uuid_0", "Value=<filterGroup_textBox}", ENDITEM,
		"Name=data_0", "Value={\"value\":\"a\",\"start\":1}", ENDITEM,
		LAST);

	lr_end_transaction("filterGroup",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("clearFilter");

/*Correlation comment - Do not change!  Original value='v71Qdd0' Name ='groupEditBtn' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=groupEditBtn",
		"RegExp=\\['zul\\.wgt\\.Button','(.*?)',\\{",
		"Ordinal=<editBtnRow}",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("zkau_54",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t67.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onChange", ENDITEM,
		"Name=uuid_0", "Value=<filterGroup_textBox}", ENDITEM,
		"Name=data_0", "Value={\"value\":\"\",\"start\":0}", ENDITEM,
		LAST);

	lr_end_transaction("clearFilter",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("clickEditBtn");

/*Correlation comment: Automatic rules - Do not change!  
Original value='v71Qo40' 
Name ='filterDivision_dropdown' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=filterDivision_dropdown",
		"RegExp=\\['zul\\.sel\\.Select','(.*?)',\\{id:'7th Division',",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Qy60' Name ='filterDivision_option' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=filterDivision_option",
		"RegExp=\\['zul\\.sel\\.Option','(.*?)',\\{",
		"Ordinal=18",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Q1o0' Name ='filterBtn' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=filterBtn",
		"RegExp=\\['zul\\.wgt\\.Button','(.*?)',\\{",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='v71Qlk0' 
Name ='saveOnCustom' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=saveOnCustom",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msave'",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='v71Qnk0' 
Name ='downloadCustomTemplate' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=downloadCustomTemplate",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msecuritytemp'",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='v71Qok0' 
Name ='downloadCustomSecurity' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=downloadCustomSecurity",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msecurityview'",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_submit_data("zkau_55",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t68.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<groupEditBtn}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":46,\"pageY\":<editBtn_PageY},\"which\":1,\"x\":26,\"y\":9}", ENDITEM,
		LAST);

	lr_end_transaction("clickEditBtn",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("filterDivision");

/*Correlation comment - Do not change!  Original value='v71Qah' Name ='changeDefault_cell' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=changeDefault_cell",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=6",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Qrg' Name ='changeValue_cell_01' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_01",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=11",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Qng' Name ='changeValue_cell_02' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_02",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=16",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Qva0' Name ='changeValue_cell_03' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_03",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=21",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Qra0' Name ='changeValue_cell_04' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_04",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=26",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Q2b0' Name ='changeValue_cell_05' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_05",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=31",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Qza0' Name ='changeValue_cell_06' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_06",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=36",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Q5c0' Name ='changeValue_cell_07' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_07",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=41",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Qmo0' Name ='changeValue_cell_08' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_08",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=46",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Qyo0' Name ='changeValue_cell_09' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_09",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=51",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Q9p0' Name ='changeValue_cell_10' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_10",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=56",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='v71Qlp0' Name ='changeValue_cell_11' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=changeValue_cell_11",
		"RegExp=\\['zul\\.inp\\.Textbox','(.*?)',\\{",
		"Ordinal=61",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("zkau_56",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t69.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onSelect", ENDITEM,
		"Name=uuid_0", "Value=<filterDivision_dropdown}", ENDITEM,
		"Name=data_0", "Value={\"items\":[\"<filterDivision_option}\"],\"reference\":\"<filterDivision_option}\"}", ENDITEM,
		"Name=cmd_1", "Value=onClick", ENDITEM,
		"Name=uuid_1", "Value=<filterBtn}", ENDITEM,
		"Name=data_1", "Value={\"pageX\":565,\"pageY\":116,\"which\":1,\"x\":11,\"y\":9}", ENDITEM,
		LAST);

	lr_end_transaction("filterDivision",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("changeDefault");

	web_submit_data("zkau_57",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t70.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onChange", ENDITEM,
		"Name=uuid_0", "Value=<changeDefault_cell}", ENDITEM,
		"Name=data_0", "Value={\"value\":\"View\",\"start\":4}", ENDITEM,
		LAST);

	web_submit_data("zkau_58",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t71.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onChange", ENDITEM,
		"Name=uuid_0", "Value=<changeDefault_cell}", ENDITEM,
		"Name=data_0", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_1", "Value=onChange", ENDITEM,
		"Name=uuid_1", "Value=<changeValue_cell_01}", ENDITEM,
		"Name=data_1", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_2", "Value=onChange", ENDITEM,
		"Name=uuid_2", "Value=<changeValue_cell_02}", ENDITEM,
		"Name=data_2", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_3", "Value=onChange", ENDITEM,
		"Name=uuid_3", "Value=<changeValue_cell_03}", ENDITEM,
		"Name=data_3", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_4", "Value=onChange", ENDITEM,
		"Name=uuid_4", "Value=<changeValue_cell_04}", ENDITEM,
		"Name=data_4", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_5", "Value=onChange", ENDITEM,
		"Name=uuid_5", "Value=<changeValue_cell_05}", ENDITEM,
		"Name=data_5", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_6", "Value=onChange", ENDITEM,
		"Name=uuid_6", "Value=<changeValue_cell_06}", ENDITEM,
		"Name=data_6", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_7", "Value=onChange", ENDITEM,
		"Name=uuid_7", "Value=<changeValue_cell_07}", ENDITEM,
		"Name=data_7", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_8", "Value=onChange", ENDITEM,
		"Name=uuid_8", "Value=<changeValue_cell_08}", ENDITEM,
		"Name=data_8", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_9", "Value=onChange", ENDITEM,
		"Name=uuid_9", "Value=<changeValue_cell_09}", ENDITEM,
		"Name=data_9", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_10", "Value=onChange", ENDITEM,
		"Name=uuid_10", "Value=<changeValue_cell_10}", ENDITEM,
		"Name=data_10", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_11", "Value=onChange", ENDITEM,
		"Name=uuid_11", "Value=<changeValue_cell_11}", ENDITEM,
		"Name=data_11", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_12", "Value=onChange", ENDITEM,
		"Name=uuid_12", "Value=<changeDefault_cell}", ENDITEM,
		"Name=data_12", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_13", "Value=onChange", ENDITEM,
		"Name=uuid_13", "Value=<changeValue_cell_01}", ENDITEM,
		"Name=data_13", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_14", "Value=onChange", ENDITEM,
		"Name=uuid_14", "Value=<changeValue_cell_02}", ENDITEM,
		"Name=data_14", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_15", "Value=onChange", ENDITEM,
		"Name=uuid_15", "Value=<changeValue_cell_03}", ENDITEM,
		"Name=data_15", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_16", "Value=onChange", ENDITEM,
		"Name=uuid_16", "Value=<changeValue_cell_04}", ENDITEM,
		"Name=data_16", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_17", "Value=onChange", ENDITEM,
		"Name=uuid_17", "Value=<changeValue_cell_05}", ENDITEM,
		"Name=data_17", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_18", "Value=onChange", ENDITEM,
		"Name=uuid_18", "Value=<changeValue_cell_06}", ENDITEM,
		"Name=data_18", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_19", "Value=onChange", ENDITEM,
		"Name=uuid_19", "Value=<changeValue_cell_07}", ENDITEM,
		"Name=data_19", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_20", "Value=onChange", ENDITEM,
		"Name=uuid_20", "Value=<changeValue_cell_08}", ENDITEM,
		"Name=data_20", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_21", "Value=onChange", ENDITEM,
		"Name=uuid_21", "Value=<changeValue_cell_09}", ENDITEM,
		"Name=data_21", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_22", "Value=onChange", ENDITEM,
		"Name=uuid_22", "Value=<changeValue_cell_10}", ENDITEM,
		"Name=data_22", "Value={\"value\":\"View\"}", ENDITEM,
		"Name=cmd_23", "Value=onChange", ENDITEM,
		"Name=uuid_23", "Value=<changeValue_cell_11}", ENDITEM,
		"Name=data_23", "Value={\"value\":\"View\"}", ENDITEM,
		LAST);

	lr_end_transaction("changeDefault",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("saveOnCustomGroup");

/*Correlation comment: Automatic rules - Do not change!  
Original value='v71Q0' 
Name ='saveMessageOnCustomGroup' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=saveMessageOnCustomGroup",
		"RegExp=\"rs\":\\[\\[\"showBusy\",\\[\\{\\$u:'(.*?)'},\"Processing...\"",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_submit_data("zkau_59",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t72.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<saveOnCustom}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":31,\"pageY\":76,\"which\":1,\"x\":12,\"y\":12}", ENDITEM,
		LAST);

	web_submit_data("zkau_60",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t73.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=echo", ENDITEM,
		"Name=opt_0", "Value=i", ENDITEM,
		"Name=uuid_0", "Value=<saveMessageOnCustomGroup}", ENDITEM,
		"Name=data_0", "Value={\"\":[\"onSave\",0]}", ENDITEM,
		LAST);

	lr_end_transaction("saveOnCustomGroup",LR_AUTO);
		
	lr_save_int(security_round,"templateCustom_downloadNum");	
	
	lr_think_time(5);

	lr_start_transaction("downloadTemplateOnCustomGroup");
	
/*Correlation comment: Automatic rules - Do not change!  
Original value='n2e' 
Name ='templateCustom_xlsx' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=templateCustom_xlsx",
		"RegExp=dwnmed-<templateCustom_downloadNum}\\\\/(.*?)\\\\/SecurityTemplateDownload",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);		
	

/*Correlation comment - Do not change!  Original value='20161124-094954.xlsx' Name ='templateCustomDate' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=templateCustomDate",
		"RegExp=SecurityTemplateDownload_(.*?)\"]]],",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("zkau_61",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t74.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<downloadCustomTemplate}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":75,\"pageY\":70,\"which\":1,\"x\":12,\"y\":6}", ENDITEM,
//		EXTRARES,
//		"URL=zkau/view/<security_dtid}/dwnmed-0/n2e/SecurityTemplateDownload_20161124-094954.xlsx", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", ENDITEM,
		LAST);
	
	web_submit_data("zkau_61_1",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Mode=HTML",
		ITEMDATA,
		EXTRARES,
		"URL=zkau/view/<security_dtid}/dwnmed-<templateCustom_downloadNum}/<templateCustom_xlsx}/SecurityTemplateDownload_<templateCustomDate}", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", ENDITEM,
		LAST);		

	lr_end_transaction("downloadTemplateOnCustomGroup",LR_AUTO);


	security_round++;
	lr_save_int(security_round,"securityCustom_downloadNum");
	
	lr_think_time(5);

	lr_start_transaction("downloadAccessOnCustomGroup");
	
/*Correlation comment: Automatic rules - Do not change!  
Original value='kr71' 
Name ='securityCustom_xlsx' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=securityCustom_xlsx",
		"RegExp=dwnmed-<securityCustom_downloadNum}\\\\/(.*?)\\\\/SecurityAccessDownload",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);		

/*Correlation comment - Do not change!  Original value='20161124-095043' Name ='securityCustomDate' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=securityCustomDate",
		"RegExp=SecurityAccessDownload_(.*?)\\.xlsx",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("zkau_62",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t75.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<downloadCustomSecurity}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":96,\"pageY\":70,\"which\":1,\"x\":8,\"y\":6}", ENDITEM,
//		EXTRARES,
//		"URL=zkau/view/<security_dtid}/dwnmed-1/kr71/SecurityAccessDownload_20161124-095043.xlsx", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", ENDITEM,
		LAST);
	
	web_submit_data("zkau_62_1",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Mode=HTML",
		ITEMDATA,
		EXTRARES,
		"URL=zkau/view/<security_dtid}/dwnmed-<securityCustom_downloadNum}/<securityCustom_xlsx}/SecurityAccessDownload_<securityCustomDate}.xlsx", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", ENDITEM,
		LAST);		

	lr_end_transaction("downloadAccessOnCustomGroup",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("switchTab");

/*Correlation comment - Do not change!  Original value='v71Qwt' Name ='editBtn_02' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=editBtn_02",
		"RegExp=\\['zul\\.wgt\\.Button','(.*?)',\\{",
		"Ordinal=<editBtnRow}",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("zkau_63",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t76.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onSelect", ENDITEM,
		"Name=uuid_0", "Value=<security_tab_01}", ENDITEM,
		"Name=data_0", "Value={\"items\":[\"<security_tab_01}\"],\"reference\":\"<security_tab_01}\"}", ENDITEM,
		LAST);

	lr_end_transaction("switchTab",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("clickEditBtn_2");

/*Correlation comment - Do not change!  Original value='v71Qmq' Name ='saveCloseOnCustomGroup' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=saveCloseOnCustomGroup",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msaveclose'",
		"Ordinal=1",  //2
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("zkau_64",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t77.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<editBtn_02}", ENDITEM,
//		"Name=data_0", "Value={\"pageX\":36,\"pageY\":548,\"which\":1,\"x\":16,\"y\":10}", ENDITEM,
//		"Name=uuid_0", "Value=<groupEditBtn}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":46,\"pageY\":<editBtn_PageY},\"which\":1,\"x\":26,\"y\":9}", ENDITEM,			
		LAST);

	lr_end_transaction("clickEditBtn_2",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("saveCloseOnCustomGroup");

	web_submit_data("zkau_65",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t78.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<saveCloseOnCustomGroup}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":47,\"pageY\":74,\"which\":1,\"x\":7,\"y\":10}", ENDITEM,
		LAST);

//	lr_think_time(127);

/*Correlation comment: Automatic rules - Do not change!  
Original value='v71Qwj0' 
Name ='downloadTemplate' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=downloadTemplate",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msecuritytemp',",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='v71Qvj0' 
Name ='downloadSecurity' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=downloadSecurity",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msecurityview'",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='v71Qtj0' 
Name ='saveCloseSecurity' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=saveCloseSecurity",
		"RegExp=\\['zul\\.menu\\.Menuitem','(.*?)',\\{id:'msaveclose'",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_submit_data("zkau_66",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t79.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=echo", ENDITEM,
		"Name=opt_0", "Value=i", ENDITEM,
		"Name=uuid_0", "Value=<saveMessageOnCustomGroup}", ENDITEM,
		"Name=data_0", "Value={\"\":[\"onSave\",0]}", ENDITEM,
		LAST);

	lr_end_transaction("saveCloseOnCustomGroup",LR_AUTO);

	security_round++;
	lr_save_int(security_round,"tempalte_downloadNum");	

	lr_think_time(5);
	

	lr_start_transaction("downloadTemplateOnGroups");
	
/*Correlation comment: Automatic rules - Do not change!  
Original value='5ke' 
Name ='tempalte_xlsx' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=tempalte_xlsx",
		"RegExp=dwnmed-<tempalte_downloadNum}\\\\/(.*?)\\\\/SecurityTemplateDownload",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);	

/*Correlation comment - Do not change!  Original value='20161124-100056' Name ='downloadTemplateDate' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=downloadTemplateDate",
		"RegExp=SecurityTemplateDownload_(.*?)\\.xlsx",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("zkau_67",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t80.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<downloadTemplate}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":75,\"pageY\":70,\"which\":1,\"x\":12,\"y\":6}", ENDITEM,
//		EXTRARES,
//		"URL=zkau/view/<security_dtid}/dwnmed-2/5ke/SecurityTemplateDownload_20161124-100056.xlsx", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", ENDITEM,
		LAST);

	web_submit_data("zkau_67_1",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Mode=HTML",
		ITEMDATA,
		EXTRARES,
		"URL=zkau/view/<security_dtid}/dwnmed-<tempalte_downloadNum}/<tempalte_xlsx}/SecurityTemplateDownload_<downloadTemplateDate}.xlsx", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", ENDITEM,
		LAST);		
	
	lr_end_transaction("downloadTemplateOnGroups",LR_AUTO);
	
	security_round++;
	lr_save_int(security_round,"security_downloadNum");		

	lr_think_time(5);

	lr_start_transaction("downloadAccessOnGroups");
	
/*Correlation comment: Automatic rules - Do not change!  
Original value='4oo' 
Name ='security_xlsx' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=security_xlsx",
		"RegExp=dwnmed-<security_downloadNum}\\\\/(.*?)\\\\/SecurityAccessDownload",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);		

/*Correlation comment - Do not change!  Original value='20161124-100205' Name ='downloadSecurityDate' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=downloadSecurityDate",
		"RegExp=SecurityAccessDownload_(.*?)\\.xlsx",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("zkau_68",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t81.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<downloadSecurity}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":98,\"pageY\":70,\"which\":1,\"x\":10,\"y\":6}", ENDITEM,
//		EXTRARES,
//		"URL=zkau/view/<security_dtid}/dwnmed-3/4oo/SecurityAccessDownload_20161124-100205.xlsx", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", ENDITEM,
		LAST);
	
	web_submit_data("zkau_68_1",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Mode=HTML",
		EXTRARES,
		"URL=zkau/view/<security_dtid}/dwnmed-<security_downloadNum}/<security_xlsx}/SecurityAccessDownload_<downloadSecurityDate}.xlsx", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", ENDITEM,
		LAST);			

	lr_end_transaction("downloadAccessOnGroups",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("saveCloseOnGroups");

	web_submit_data("zkau_69",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t82.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=onClick", ENDITEM,
		"Name=uuid_0", "Value=<saveCloseSecurity}", ENDITEM,
		"Name=data_0", "Value={\"pageX\":52,\"pageY\":70,\"which\":1,\"x\":12,\"y\":6}", ENDITEM,
		LAST);

	web_submit_data("zkau_70",
		"Action=https://<url}/bin-java/zkau",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t83.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=dtid", "Value=<security_dtid}", ENDITEM,
		"Name=cmd_0", "Value=echo", ENDITEM,
		"Name=opt_0", "Value=i", ENDITEM,
		"Name=uuid_0", "Value=<saveMessageOnCustomGroup}", ENDITEM,
		"Name=data_0", "Value={\"\":[\"onSave\",0]}", ENDITEM,
		"Name=cmd_1", "Value=echo", ENDITEM,
		"Name=opt_1", "Value=i", ENDITEM,
		"Name=uuid_1", "Value=<saveMessageOnCustomGroup}", ENDITEM,
		"Name=data_1", "Value={\"\":[\"onSave\",1]}", ENDITEM,
		EXTRARES,
		"URL=zkau?dtid=<security_dtid}&cmd_0=rmDesktop&opt_0=i", "Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}", ENDITEM,
		LAST);

	web_url("efsnPackage.do_userGoHome_2",
		"URL=https://<url}/bin-java/efsnPackage.do_userGoHome",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_securityEntry?dump=<dump_03}",
		"Snapshot=t84.inf",
		"Mode=HTML",
		LAST);

	web_url("efsnPackage.do_logicalWorkflow_5",
		"URL=https://<url}/bin-java/efsnPackage.do_logicalWorkflow?dump=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://<url}/bin-java/efsnPackage.do_userGoHome",
		"Snapshot=t85.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("saveCloseOnGroups",LR_AUTO);

	return 0;
}
