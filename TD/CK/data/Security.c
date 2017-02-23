Security()
{

	lr_think_time(38);

	lr_start_transaction("loadSecurity");

	web_url("efsnPackage.do_securityEntry", 
		"URL=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_userGoHome", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_url("efsnPackage.do_logicalWorkflow_4", 
		"URL=https://10.125.2.174/bin-java/efsnPackage.do_logicalWorkflow?dump=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_url("do_loadZKTemplate_2", 
		"URL=https://10.125.2.174/bin-java/zk/do_loadZKTemplate?dump=0.6456625226919577&f=security.zul&zk.redrawCtrl=page&dump=0.2705653695988235", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../zkau/web/_zv2015042817/js/zhtml.wpd", "Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", ENDITEM, 
		"Url=/javascript/zul.js?_=1479951685370", "Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", ENDITEM, 
		"Url=/images/common/disabed_bg_stripe.png", "Referer=https://10.125.2.174/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", ENDITEM, 
		"Url=../zkau/web/b34f6723/zkstyle/zul/img/common/bar-bg.png", "Referer=https://10.125.2.174/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", ENDITEM, 
		LAST);

	lr_end_transaction("loadSecurity",LR_AUTO);

	lr_think_time(26);

	web_submit_data("zkau_43", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onChange", ENDITEM, 
		"Name=uuid_0", "Value=v71Qy", ENDITEM, 
		"Name=data_0", "Value={\"value\":\"test\",\"start\":4}", ENDITEM, 
		LAST);

	lr_think_time(5);

	lr_start_transaction("newGroup");

	web_submit_data("zkau_44", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onClick", ENDITEM, 
		"Name=uuid_0", "Value=v71Q_0", ENDITEM, 
		"Name=data_0", "Value={\"pageX\":343,\"pageY\":100,\"which\":1,\"x\":22,\"y\":11}", ENDITEM, 
		LAST);

	lr_end_transaction("newGroup",LR_AUTO);

	lr_think_time(23);

	web_submit_data("zkau_45", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onSelect", ENDITEM, 
		"Name=uuid_0", "Value=v71Q20", ENDITEM, 
		"Name=data_0", "Value={\"items\":[\"v71Q6h\"],\"reference\":\"v71Q6h\"}", ENDITEM, 
		LAST);

	lr_think_time(9);

	web_custom_request("zkau_46", 
		"URL=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=dtid=z_fd6&cmd_0=onChange&uuid_0=v71Q60&data_0=%7B%22value%22%3A%22rename%20test%22%2C%22start%22%3A11%7D", 
		LAST);

	lr_think_time(11);

	lr_start_transaction("renameGroup");

	web_submit_data("zkau_47", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onClick", ENDITEM, 
		"Name=uuid_0", "Value=v71Q70", ENDITEM, 
		"Name=data_0", "Value={\"pageX\":855,\"pageY\":95,\"which\":1,\"x\":23,\"y\":6}", ENDITEM, 
		LAST);

	lr_end_transaction("renameGroup",LR_AUTO);

	lr_think_time(55);

	web_submit_data("zkau_48", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onScrollPos", ENDITEM, 
		"Name=uuid_0", "Value=v71Q90", ENDITEM, 
		"Name=data_0", "Value={\"top\":133,\"left\":0}", ENDITEM, 
		"Name=cmd_1", "Value=onScrollPos", ENDITEM, 
		"Name=uuid_1", "Value=v71Q90", ENDITEM, 
		"Name=data_1", "Value={\"top\":137,\"left\":0}", ENDITEM, 
		"Name=cmd_2", "Value=onScrollPos", ENDITEM, 
		"Name=uuid_2", "Value=v71Q90", ENDITEM, 
		"Name=data_2", "Value={\"top\":139,\"left\":0}", ENDITEM, 
		"Name=cmd_3", "Value=onScrollPos", ENDITEM, 
		"Name=uuid_3", "Value=v71Q90", ENDITEM, 
		"Name=data_3", "Value={\"top\":152,\"left\":0}", ENDITEM, 
		"Name=cmd_4", "Value=onAnchorPos", ENDITEM, 
		"Name=uuid_4", "Value=v71Q90", ENDITEM, 
		"Name=data_4", "Value={\"top\":414,\"left\":0}", ENDITEM, 
		"Name=cmd_5", "Value=onSelect", ENDITEM, 
		"Name=uuid_5", "Value=v71Q90", ENDITEM, 
		"Name=data_5", "Value={\"items\":[\"v71Qbi0\"],\"reference\":\"v71Qbi0\",\"clearFirst\":false,\"selectAll\":true,\"pageX\":33,\"pageY\":437,\"which\":1,\"x\":14,\"y\":322}", ENDITEM, 
		LAST);

	lr_think_time(12);

	lr_start_transaction("deleteGroup");

	web_submit_data("zkau_49", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onClick", ENDITEM, 
		"Name=uuid_0", "Value=v71Qpf", ENDITEM, 
		"Name=data_0", "Value={\"pageX\":129,\"pageY\":73,\"which\":1,\"x\":17,\"y\":9}", ENDITEM, 
		LAST);

	lr_end_transaction("deleteGroup",LR_AUTO);

	lr_think_time(38);

	lr_start_transaction("sortGroup");

	web_submit_data("zkau_50", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onScrollPos", ENDITEM, 
		"Name=uuid_0", "Value=v71Q90", ENDITEM, 
		"Name=data_0", "Value={\"top\":113,\"left\":0}", ENDITEM, 
		"Name=cmd_1", "Value=onSort", ENDITEM, 
		"Name=uuid_1", "Value=v71Q41", ENDITEM, 
		"Name=data_1", "Value={\"\":true}", ENDITEM, 
		LAST);

	lr_end_transaction("sortGroup",LR_AUTO);

	lr_think_time(20);

	lr_start_transaction("sortUser");

	web_submit_data("zkau_51", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onSort", ENDITEM, 
		"Name=uuid_0", "Value=v71Q51", ENDITEM, 
		"Name=data_0", "Value={\"\":true}", ENDITEM, 
		LAST);

	lr_end_transaction("sortUser",LR_AUTO);

	lr_think_time(20);

	lr_start_transaction("sortLogin");

	web_submit_data("zkau_52", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onSort", ENDITEM, 
		"Name=uuid_0", "Value=v71Q61", ENDITEM, 
		"Name=data_0", "Value={\"\":true}", ENDITEM, 
		LAST);

	lr_end_transaction("sortLogin",LR_AUTO);

	lr_think_time(31);

	lr_start_transaction("filterGroup");

	web_submit_data("zkau_53", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onChange", ENDITEM, 
		"Name=uuid_0", "Value=v71Qw0", ENDITEM, 
		"Name=data_0", "Value={\"value\":\"a\",\"start\":1}", ENDITEM, 
		LAST);

	lr_end_transaction("filterGroup",LR_AUTO);

	lr_think_time(23);

	lr_start_transaction("clearFilter");

	web_submit_data("zkau_54", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onChange", ENDITEM, 
		"Name=uuid_0", "Value=v71Qw0", ENDITEM, 
		"Name=data_0", "Value={\"value\":\"\",\"start\":0}", ENDITEM, 
		LAST);

	lr_end_transaction("clearFilter",LR_AUTO);

	lr_think_time(32);

	lr_start_transaction("clickEditBtn");

	web_submit_data("zkau_55", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onClick", ENDITEM, 
		"Name=uuid_0", "Value=v71Qdd0", ENDITEM, 
		"Name=data_0", "Value={\"pageX\":46,\"pageY\":547,\"which\":1,\"x\":26,\"y\":9}", ENDITEM, 
		LAST);

	lr_end_transaction("clickEditBtn",LR_AUTO);

	lr_think_time(29);

	lr_start_transaction("filterDivision");

	web_submit_data("zkau_56", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onSelect", ENDITEM, 
		"Name=uuid_0", "Value=v71Qo40", ENDITEM, 
		"Name=data_0", "Value={\"items\":[\"v71Qy60\"],\"reference\":\"v71Qy60\"}", ENDITEM, 
		"Name=cmd_1", "Value=onClick", ENDITEM, 
		"Name=uuid_1", "Value=v71Q1o0", ENDITEM, 
		"Name=data_1", "Value={\"pageX\":565,\"pageY\":116,\"which\":1,\"x\":11,\"y\":9}", ENDITEM, 
		LAST);

	lr_end_transaction("filterDivision",LR_AUTO);

	lr_think_time(44);

	lr_start_transaction("changeDefault");

	web_submit_data("zkau_57", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onChange", ENDITEM, 
		"Name=uuid_0", "Value=v71Qah", ENDITEM, 
		"Name=data_0", "Value={\"value\":\"View\",\"start\":4}", ENDITEM, 
		LAST);

	web_submit_data("zkau_58", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onChange", ENDITEM, 
		"Name=uuid_0", "Value=v71Qah", ENDITEM, 
		"Name=data_0", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_1", "Value=onChange", ENDITEM, 
		"Name=uuid_1", "Value=v71Qrg", ENDITEM, 
		"Name=data_1", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_2", "Value=onChange", ENDITEM, 
		"Name=uuid_2", "Value=v71Qng", ENDITEM, 
		"Name=data_2", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_3", "Value=onChange", ENDITEM, 
		"Name=uuid_3", "Value=v71Qva0", ENDITEM, 
		"Name=data_3", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_4", "Value=onChange", ENDITEM, 
		"Name=uuid_4", "Value=v71Qra0", ENDITEM, 
		"Name=data_4", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_5", "Value=onChange", ENDITEM, 
		"Name=uuid_5", "Value=v71Q2b0", ENDITEM, 
		"Name=data_5", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_6", "Value=onChange", ENDITEM, 
		"Name=uuid_6", "Value=v71Qza0", ENDITEM, 
		"Name=data_6", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_7", "Value=onChange", ENDITEM, 
		"Name=uuid_7", "Value=v71Q5c0", ENDITEM, 
		"Name=data_7", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_8", "Value=onChange", ENDITEM, 
		"Name=uuid_8", "Value=v71Qmo0", ENDITEM, 
		"Name=data_8", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_9", "Value=onChange", ENDITEM, 
		"Name=uuid_9", "Value=v71Qyo0", ENDITEM, 
		"Name=data_9", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_10", "Value=onChange", ENDITEM, 
		"Name=uuid_10", "Value=v71Q9p0", ENDITEM, 
		"Name=data_10", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_11", "Value=onChange", ENDITEM, 
		"Name=uuid_11", "Value=v71Qlp0", ENDITEM, 
		"Name=data_11", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_12", "Value=onChange", ENDITEM, 
		"Name=uuid_12", "Value=v71Qah", ENDITEM, 
		"Name=data_12", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_13", "Value=onChange", ENDITEM, 
		"Name=uuid_13", "Value=v71Qrg", ENDITEM, 
		"Name=data_13", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_14", "Value=onChange", ENDITEM, 
		"Name=uuid_14", "Value=v71Qng", ENDITEM, 
		"Name=data_14", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_15", "Value=onChange", ENDITEM, 
		"Name=uuid_15", "Value=v71Qva0", ENDITEM, 
		"Name=data_15", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_16", "Value=onChange", ENDITEM, 
		"Name=uuid_16", "Value=v71Qra0", ENDITEM, 
		"Name=data_16", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_17", "Value=onChange", ENDITEM, 
		"Name=uuid_17", "Value=v71Q2b0", ENDITEM, 
		"Name=data_17", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_18", "Value=onChange", ENDITEM, 
		"Name=uuid_18", "Value=v71Qza0", ENDITEM, 
		"Name=data_18", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_19", "Value=onChange", ENDITEM, 
		"Name=uuid_19", "Value=v71Q5c0", ENDITEM, 
		"Name=data_19", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_20", "Value=onChange", ENDITEM, 
		"Name=uuid_20", "Value=v71Qmo0", ENDITEM, 
		"Name=data_20", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_21", "Value=onChange", ENDITEM, 
		"Name=uuid_21", "Value=v71Qyo0", ENDITEM, 
		"Name=data_21", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_22", "Value=onChange", ENDITEM, 
		"Name=uuid_22", "Value=v71Q9p0", ENDITEM, 
		"Name=data_22", "Value={\"value\":\"View\"}", ENDITEM, 
		"Name=cmd_23", "Value=onChange", ENDITEM, 
		"Name=uuid_23", "Value=v71Qlp0", ENDITEM, 
		"Name=data_23", "Value={\"value\":\"View\"}", ENDITEM, 
		LAST);

	lr_end_transaction("changeDefault",LR_AUTO);

	lr_think_time(37);

	lr_start_transaction("saveCustomGroup");

	web_submit_data("zkau_59", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onClick", ENDITEM, 
		"Name=uuid_0", "Value=v71Qlk0", ENDITEM, 
		"Name=data_0", "Value={\"pageX\":31,\"pageY\":76,\"which\":1,\"x\":12,\"y\":12}", ENDITEM, 
		LAST);

	web_submit_data("zkau_60", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=echo", ENDITEM, 
		"Name=opt_0", "Value=i", ENDITEM, 
		"Name=uuid_0", "Value=v71Q0", ENDITEM, 
		"Name=data_0", "Value={\"\":[\"onSave\",0]}", ENDITEM, 
		LAST);

	lr_end_transaction("saveCustomGroup",LR_AUTO);

	lr_think_time(74);

	lr_start_transaction("downloadTemplateOnCustomGroup");

	web_submit_data("zkau_61", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onClick", ENDITEM, 
		"Name=uuid_0", "Value=v71Qnk0", ENDITEM, 
		"Name=data_0", "Value={\"pageX\":75,\"pageY\":70,\"which\":1,\"x\":12,\"y\":6}", ENDITEM, 
		EXTRARES, 
		"Url=zkau/view/z_fd6/dwnmed-0/n2e/SecurityTemplateDownload_20161124-094954.xlsx", "Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", ENDITEM, 
		LAST);

	lr_end_transaction("downloadTemplateOnCustomGroup",LR_AUTO);

	lr_think_time(45);

	lr_start_transaction("downloadAccessOnCustomGroup");

	web_submit_data("zkau_62", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onClick", ENDITEM, 
		"Name=uuid_0", "Value=v71Qok0", ENDITEM, 
		"Name=data_0", "Value={\"pageX\":96,\"pageY\":70,\"which\":1,\"x\":8,\"y\":6}", ENDITEM, 
		EXTRARES, 
		"Url=zkau/view/z_fd6/dwnmed-1/kr71/SecurityAccessDownload_20161124-095043.xlsx", "Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", ENDITEM, 
		LAST);

	lr_end_transaction("downloadAccessOnCustomGroup",LR_AUTO);

	lr_think_time(40);

	lr_start_transaction("switchTab");

	web_submit_data("zkau_63", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onSelect", ENDITEM, 
		"Name=uuid_0", "Value=v71Qr", ENDITEM, 
		"Name=data_0", "Value={\"items\":[\"v71Qr\"],\"reference\":\"v71Qr\"}", ENDITEM, 
		LAST);

	lr_end_transaction("switchTab",LR_AUTO);

	lr_think_time(57);

	lr_start_transaction("clickEditBtn_2");

	web_submit_data("zkau_64", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onClick", ENDITEM, 
		"Name=uuid_0", "Value=v71Qwt", ENDITEM, 
		"Name=data_0", "Value={\"pageX\":36,\"pageY\":548,\"which\":1,\"x\":16,\"y\":10}", ENDITEM, 
		LAST);

	lr_end_transaction("clickEditBtn_2",LR_AUTO);

	lr_think_time(256);

	lr_start_transaction("saveCloseOnCustomGroup");

	web_submit_data("zkau_65", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onClick", ENDITEM, 
		"Name=uuid_0", "Value=v71Qmq", ENDITEM, 
		"Name=data_0", "Value={\"pageX\":47,\"pageY\":74,\"which\":1,\"x\":7,\"y\":10}", ENDITEM, 
		LAST);

	lr_think_time(127);

	web_submit_data("zkau_66", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=echo", ENDITEM, 
		"Name=opt_0", "Value=i", ENDITEM, 
		"Name=uuid_0", "Value=v71Q0", ENDITEM, 
		"Name=data_0", "Value={\"\":[\"onSave\",0]}", ENDITEM, 
		LAST);

	lr_end_transaction("saveCloseOnCustomGroup",LR_AUTO);

	lr_think_time(127);

	lr_start_transaction("downloadTemplateOnGroups");

	web_submit_data("zkau_67", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onClick", ENDITEM, 
		"Name=uuid_0", "Value=v71Qwj0", ENDITEM, 
		"Name=data_0", "Value={\"pageX\":75,\"pageY\":70,\"which\":1,\"x\":12,\"y\":6}", ENDITEM, 
		EXTRARES, 
		"Url=zkau/view/z_fd6/dwnmed-2/5ke/SecurityTemplateDownload_20161124-100056.xlsx", "Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", ENDITEM, 
		LAST);

	lr_end_transaction("downloadTemplateOnGroups",LR_AUTO);

	lr_think_time(65);

	lr_start_transaction("downloadAccessOnGroups");

	web_submit_data("zkau_68", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onClick", ENDITEM, 
		"Name=uuid_0", "Value=v71Qvj0", ENDITEM, 
		"Name=data_0", "Value={\"pageX\":98,\"pageY\":70,\"which\":1,\"x\":10,\"y\":6}", ENDITEM, 
		EXTRARES, 
		"Url=zkau/view/z_fd6/dwnmed-3/4oo/SecurityAccessDownload_20161124-100205.xlsx", "Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", ENDITEM, 
		LAST);

	lr_end_transaction("downloadAccessOnGroups",LR_AUTO);

	lr_think_time(92);

	lr_start_transaction("saveCloseOnGroups");

	web_submit_data("zkau_69", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=onClick", ENDITEM, 
		"Name=uuid_0", "Value=v71Qtj0", ENDITEM, 
		"Name=data_0", "Value={\"pageX\":52,\"pageY\":70,\"which\":1,\"x\":12,\"y\":6}", ENDITEM, 
		LAST);

	web_submit_data("zkau_70", 
		"Action=https://10.125.2.174/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_fd6", ENDITEM, 
		"Name=cmd_0", "Value=echo", ENDITEM, 
		"Name=opt_0", "Value=i", ENDITEM, 
		"Name=uuid_0", "Value=v71Q0", ENDITEM, 
		"Name=data_0", "Value={\"\":[\"onSave\",0]}", ENDITEM, 
		"Name=cmd_1", "Value=echo", ENDITEM, 
		"Name=opt_1", "Value=i", ENDITEM, 
		"Name=uuid_1", "Value=v71Q0", ENDITEM, 
		"Name=data_1", "Value={\"\":[\"onSave\",1]}", ENDITEM, 
		EXTRARES, 
		"Url=zkau?dtid=z_fd6&cmd_0=rmDesktop&opt_0=i", "Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", ENDITEM, 
		LAST);

	web_url("efsnPackage.do_userGoHome_2", 
		"URL=https://10.125.2.174/bin-java/efsnPackage.do_userGoHome", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_securityEntry?dump=0.2705653695988235", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		LAST);

	web_url("efsnPackage.do_logicalWorkflow_5", 
		"URL=https://10.125.2.174/bin-java/efsnPackage.do_logicalWorkflow?dump=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.174/bin-java/efsnPackage.do_userGoHome", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("saveCloseOnGroups",LR_AUTO);

	return 0;
}
