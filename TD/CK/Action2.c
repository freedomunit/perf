Action2()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_url("10.125.2.179", 
		"URL=https://10.125.2.179/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		"Url=/branding/7thonline/7thonline_logo.svgz", "Referer=https://10.125.2.179/branding/7thonline/login.css", ENDITEM, 
		"Url=/branding/7thonline/bg_username.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", ENDITEM, 
		"Url=/branding/7thonline/os_bg.jpg", "Referer=https://10.125.2.179/branding/7thonline/login.css", ENDITEM, 
		"Url=/branding/7thonline/login.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", ENDITEM, 
		"Url=/branding/7thonline/bg_password.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", ENDITEM, 
		"Url=/branding/7thonline/button_bg.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", ENDITEM, 
		"Url=/images/common/loadingAnimation.gif", "Referer=https://10.125.2.179/bin-java/login?f=general/login.htm", ENDITEM, 
		"Url=/branding/7thonline/x.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", ENDITEM, 
		LAST);

	web_add_cookie("map=true; DOMAIN=10.125.2.179");

	web_submit_data("efsnPackage.do_userAuth", 
		"Action=https://10.125.2.179/bin-java/efsnPackage.do_userAuth", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/login?f=general/login.htm", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value=jip", ENDITEM, 
		"Name=passwd", "Value=wuhan02", ENDITEM, 
		"Name=login", "Value=Wait", ENDITEM, 
		"Name=map", "Value=on", ENDITEM, 
		EXTRARES, 
		"Url=../branding/7thonline/btn-nav-search-top_bt.png", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", ENDITEM, 
		"Url=../images/common/checkbox_s.gif", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_userGoHome;jsessionid=4731C025E561E733079771E59B5DCD75.tomcat01?dump=1", ENDITEM, 
		"Url=../branding/7thonline/bg-nav-search-top_grey.gif", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", ENDITEM, 
		"Url=../branding/7thonline/sidetab_bt.png", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", ENDITEM, 
		"Url=../branding/7thonline/bg-nav-search-bottom_trans.png", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", ENDITEM, 
		"Url=../images/common/tip.gif", "Referer=https://10.125.2.179/javascript/7thonline_default_v4.css", ENDITEM, 
		"Url=../branding/7thonline/loader-whiteonblue.gif", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", ENDITEM, 
		LAST);

	web_url("efsnPackage.do_logicalWorkflow", 
		"URL=https://10.125.2.179/bin-java/efsnPackage.do_logicalWorkflow?dump=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_userGoHome;jsessionid=4731C025E561E733079771E59B5DCD75.tomcat01?dump=1", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_url("efsnPackage.do_securityEntry", 
		"URL=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_userGoHome;jsessionid=4731C025E561E733079771E59B5DCD75.tomcat01?dump=1", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		LAST);

	web_url("efsnPackage.do_logicalWorkflow_2", 
		"URL=https://10.125.2.179/bin-java/efsnPackage.do_logicalWorkflow?dump=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		LAST);

	web_url("do_loadZKTemplate", 
		"URL=https://10.125.2.179/bin-java/zk/do_loadZKTemplate?dump=0.467239065758302&f=security.zul&zk.redrawCtrl=page&dump=0.8183569356638731", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../zkau/web/_zv3.9.0/js/zss.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.mesh.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.box.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.sel.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.tab.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.inp.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.utl.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zhtml.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		"Url=/javascript/zul.js?_=1480068015214", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.wnd.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.menu.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zk.fmt.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.layout.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zkex.inp.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		"Url=../zkau/web/b34f6723/zkstyle/zul/img/menu/zk-menu-sprite.png", "Referer=https://10.125.2.179/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", ENDITEM, 
		"Url=../zkau/web/b34f6723/zkstyle/zul/img/common/bar-bg.png", "Referer=https://10.125.2.179/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", ENDITEM, 
		"Url=/images/common/close_grey.gif", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		"Url=/images/common/disabed_bg_stripe.png", "Referer=https://10.125.2.179/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", ENDITEM, 
		"Url=../zkau/web/b34f6723/zul/less/font/fontawesome-webfont.woff?v=4.0.1", "Referer=https://10.125.2.179/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", ENDITEM, 
		LAST);

	lr_think_time(4);

	web_submit_data("zkau", 
		"Action=https://10.125.2.179/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_hxu", ENDITEM, 
		"Name=cmd_0", "Value=onClick", ENDITEM, 
		"Name=uuid_0", "Value=a04Qnf", ENDITEM, 
		"Name=data_0", "Value={\"pageX\":75,\"pageY\":75,\"which\":1,\"x\":12,\"y\":11}", ENDITEM, 
		EXTRARES, 
		"Url=zkau/view/z_hxu/dwnmed-0/pul1/SecurityTemplateDownload_20161125-180026.xlsx", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		LAST);

	web_submit_data("zkau_2", 
		"Action=https://10.125.2.179/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_hxu", ENDITEM, 
		"Name=cmd_0", "Value=onClick", ENDITEM, 
		"Name=uuid_0", "Value=a04Qof", ENDITEM, 
		"Name=data_0", "Value={\"pageX\":95,\"pageY\":68,\"which\":1,\"x\":7,\"y\":4}", ENDITEM, 
		EXTRARES, 
		"Url=zkau/view/z_hxu/dwnmed-1/7h01/SecurityAccessDownload_20161125-180032.xlsx", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		LAST);

	lr_think_time(11);

	lr_start_transaction("saveClose");

	web_submit_data("zkau_3", 
		"Action=https://10.125.2.179/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_hxu", ENDITEM, 
		"Name=cmd_0", "Value=onClick", ENDITEM, 
		"Name=uuid_0", "Value=a04Qmf", ENDITEM, 
		"Name=data_0", "Value={\"pageX\":45,\"pageY\":66,\"which\":1,\"x\":5,\"y\":2}", ENDITEM, 
		LAST);

	web_submit_data("zkau_4", 
		"Action=https://10.125.2.179/bin-java/zkau", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dtid", "Value=z_hxu", ENDITEM, 
		"Name=cmd_0", "Value=echo", ENDITEM, 
		"Name=opt_0", "Value=i", ENDITEM, 
		"Name=uuid_0", "Value=a04Q0", ENDITEM, 
		"Name=data_0", "Value={\"\":[\"onSave\",0]}", ENDITEM, 
		"Name=cmd_1", "Value=echo", ENDITEM, 
		"Name=opt_1", "Value=i", ENDITEM, 
		"Name=uuid_1", "Value=a04Q0", ENDITEM, 
		"Name=data_1", "Value={\"\":[\"onSave\",1]}", ENDITEM, 
		EXTRARES, 
		"Url=zkau?dtid=z_hxu&cmd_0=rmDesktop&opt_0=i", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", ENDITEM, 
		LAST);

	web_url("efsnPackage.do_userGoHome", 
		"URL=https://10.125.2.179/bin-java/efsnPackage.do_userGoHome", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.8183569356638731", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		LAST);

	web_url("efsnPackage.do_logicalWorkflow_3", 
		"URL=https://10.125.2.179/bin-java/efsnPackage.do_logicalWorkflow?dump=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_userGoHome", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("saveClose",LR_AUTO);

	return 0;
}