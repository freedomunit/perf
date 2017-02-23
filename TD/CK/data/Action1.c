Action1()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_url("10.125.2.179", 
		"URL=https://10.125.2.179/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		"Url=/branding/7thonline/os_bg.jpg", "Referer=https://10.125.2.179/branding/7thonline/login.css", ENDITEM, 
		"Url=/branding/7thonline/7thonline_logo.svgz", "Referer=https://10.125.2.179/branding/7thonline/login.css", ENDITEM, 
		"Url=/branding/7thonline/login.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", ENDITEM, 
		"Url=/branding/7thonline/bg_username.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", ENDITEM, 
		"Url=/branding/7thonline/bg_password.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", ENDITEM, 
		"Url=/images/common/loadingAnimation.gif", "Referer=https://10.125.2.179/bin-java/login?f=general/login.htm", ENDITEM, 
		"Url=/branding/7thonline/button_bg.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", ENDITEM, 
		"Url=/branding/7thonline/x.gif", "Referer=https://10.125.2.179/branding/7thonline/login.css", ENDITEM, 
		LAST);

	web_add_cookie("map=true; DOMAIN=10.125.2.179");

	web_submit_data("efsnPackage.do_userAuth", 
		"Action=https://10.125.2.179/bin-java/efsnPackage.do_userAuth", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/login?f=general/login.htm", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value=jip", ENDITEM, 
		"Name=passwd", "Value=wuhan02", ENDITEM, 
		"Name=login", "Value=Wait", ENDITEM, 
		"Name=map", "Value=on", ENDITEM, 
		EXTRARES, 
		"Url=../branding/7thonline/btn-nav-search-top_bt.png", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", ENDITEM, 
		"Url=../branding/7thonline/bg-nav-search-top_grey.gif", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", ENDITEM, 
		"Url=../branding/7thonline/sidetab_bt.png", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", ENDITEM, 
		"Url=../images/common/checkbox_s.gif", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_userGoHome;jsessionid=2D225E2CF8D7DE4A32AECFB2F0733508.tomcat01?dump=1", ENDITEM, 
		"Url=../images/common/tip.gif", "Referer=https://10.125.2.179/javascript/7thonline_default_v4.css", ENDITEM, 
		"Url=../branding/7thonline/bg-nav-search-bottom_trans.png", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", ENDITEM, 
		"Url=../branding/7thonline/loader-whiteonblue.gif", "Referer=https://10.125.2.179/branding/7thonline/stylesheet.css", ENDITEM, 
		LAST);

	web_url("efsnPackage.do_logicalWorkflow", 
		"URL=https://10.125.2.179/bin-java/efsnPackage.do_logicalWorkflow?dump=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_userGoHome;jsessionid=2D225E2CF8D7DE4A32AECFB2F0733508.tomcat01?dump=1", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(8);

	web_url("efsnPackage.do_securityEntry", 
		"URL=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_userGoHome;jsessionid=2D225E2CF8D7DE4A32AECFB2F0733508.tomcat01?dump=1", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);

	web_url("efsnPackage.do_logicalWorkflow_2", 
		"URL=https://10.125.2.179/bin-java/efsnPackage.do_logicalWorkflow?dump=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		LAST);

	web_url("do_loadZKTemplate", 
		"URL=https://10.125.2.179/bin-java/zk/do_loadZKTemplate?dump=0.46383364552379525&f=security.zul&zk.redrawCtrl=page&dump=0.6693488422814369", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../zkau/web/_zv3.9.0/js/zss.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.box.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.tab.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.mesh.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.inp.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.sel.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zhtml.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.utl.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.wnd.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", ENDITEM, 
		"Url=/javascript/zul.js?_=1480054471095", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.menu.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zk.fmt.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zul.layout.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", ENDITEM, 
		"Url=../zkau/web/_zv2015042817/js/zkex.inp.wpd", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", ENDITEM, 
		"Url=/images/common/close_grey.gif", "Referer=https://10.125.2.179/bin-java/efsnPackage.do_securityEntry?dump=0.6693488422814369", ENDITEM, 
		"Url=../zkau/web/b34f6723/zkstyle/zul/img/menu/zk-menu-sprite.png", "Referer=https://10.125.2.179/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", ENDITEM, 
		"Url=/images/common/disabed_bg_stripe.png", "Referer=https://10.125.2.179/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", ENDITEM, 
		"Url=../zkau/web/b34f6723/zul/less/font/fontawesome-webfont.woff?v=4.0.1", "Referer=https://10.125.2.179/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", ENDITEM, 
		"Url=../zkau/web/b34f6723/zkstyle/zul/img/common/bar-bg.png", "Referer=https://10.125.2.179/bin-java/zkau/web/b34f6723/_zkiju-zkstyle/zul/css/zk.wcs", ENDITEM, 
		LAST);

	return 0;
}