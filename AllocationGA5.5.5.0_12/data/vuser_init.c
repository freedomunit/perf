/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 1096
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_url("10.125.2.182", 
		"URL=http://10.125.2.182/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		"Url=/branding/opti/login.gif", "Referer=http://10.125.2.182/branding/opti/stylesheet_public.css", ENDITEM, 
		"Url=/branding/opti/bg_password.gif", "Referer=http://10.125.2.182/branding/opti/stylesheet_public.css", ENDITEM, 
		"Url=/branding/opti/os_bg.jpg", "Referer=http://10.125.2.182/branding/opti/stylesheet_public.css", ENDITEM, 
		"Url=/branding/opti/bg_username.gif", "Referer=http://10.125.2.182/branding/opti/stylesheet_public.css", ENDITEM, 
		"Url=/images/common/loadingAnimation.gif", "Referer=http://10.125.2.182/bin-java/login?f=general/login.htm", ENDITEM, 
		"Url=/images/common/x.gif", "Referer=http://10.125.2.182/branding/opti/stylesheet_public.css", ENDITEM, 
		LAST);

	web_submit_data("efsnPackage.do_userAuth", 
		"Action=http://10.125.2.182/bin-java/efsnPackage.do_userAuth", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.125.2.182/bin-java/login?f=general/login.htm", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value=ABJ", ENDITEM, 
		"Name=passwd", "Value=wuhan02", ENDITEM, 
		"Name=login", "Value=Wait", ENDITEM, 
		LAST);

	web_submit_data("efsnPackage.do_userAuth_2", 
		"Action=http://10.125.2.182/bin-java/efsnPackage.do_userAuth", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.125.2.182/bin-java/efsnPackage.do_userLoginWarning;jsessionid=645DEDDFCF243ACDAE70CAC902256A85.tomcat01?dump=0.2426554132305876", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=answeryes", "Value=Wait", ENDITEM, 
		EXTRARES, 
		"Url=../branding/opti/btn-nav-search-top_bt.png", "Referer=http://10.125.2.182/branding/opti/stylesheet.css", ENDITEM, 
		"Url=../branding/opti/bg-nav-search-top_grey.gif", "Referer=http://10.125.2.182/branding/opti/stylesheet.css", ENDITEM, 
		"Url=../branding/opti/bg-nav-search-bottom_trans.png", "Referer=http://10.125.2.182/branding/opti/stylesheet.css", ENDITEM, 
		LAST);

	return 0;
}
