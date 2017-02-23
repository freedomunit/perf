/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 1096
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_url("10.125.2.182", 
		"URL=<url}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		"Url=/branding/opti/login.gif", "Referer=<url}branding/opti/stylesheet_public.css", ENDITEM, 
		"Url=/branding/opti/bg_password.gif", "Referer=<url}branding/opti/stylesheet_public.css", ENDITEM, 
		"Url=/branding/opti/os_bg.jpg", "Referer=<url}branding/opti/stylesheet_public.css", ENDITEM, 
		"Url=/branding/opti/bg_username.gif", "Referer=<url}branding/opti/stylesheet_public.css", ENDITEM, 
		"Url=/images/common/loadingAnimation.gif", "Referer=<url}bin-java/login?f=general/login.htm", ENDITEM, 
		"Url=/images/common/x.gif", "Referer=<url}branding/opti/stylesheet_public.css", ENDITEM, 
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='645DEDDFCF243ACDAE70CAC902256A85' 
Name ='jsessionid' 
Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=jsessionid",
//		"RegExp=jsessionid=(.*?)\\.tomcat",
		"LB=jsessionid=",
		"RB=.tomcat",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Headers",
//		"RequestUrl=*/efsnPackage.do_userAuth*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='01' 
Name ='tomcat_num' 
Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=tomcat_num",
//		"RegExp=\\.tomcat(.*?)\\?dump",
		"LB=.tomcat",
		"RB=?dump",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Headers",
//		"RequestUrl=*/efsnPackage.do_userAuth*",
		LAST);

/*Correlation comment - Do not change!  Original value='0.2426554132305876' Name ='dump_01' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=dump_01",
//		"RegExp=dump=(.*?)\\\r\\\n",
		"LB/RE=dump=",
		"RB/RE=\\\r\\\n",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/efsnPackage.do_userAuth*",
		LAST);
		
	web_reg_find("Text=Warn",
		"SaveCount=warn_count",
		LAST);			

	web_submit_data("efsnPackage.do_userAuth", 
		"Action=<url}bin-java/efsnPackage.do_userAuth", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=<url}bin-java/login?f=general/login.htm", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value=<userName}", ENDITEM, 
		"Name=passwd", "Value=<passwd}", ENDITEM, 
		"Name=login", "Value=Wait", ENDITEM, 
		LAST);
		

	if (atoi(lr_eval_string("<warn_count}")) > 0){	

	/*Correlation comment - Do not change!  Original value='0.1389028949622646' Name ='dump_02' Type ='Manual'*/
		web_reg_save_param_ex(
			"ParamName=dump_02",
//			"RegExp=dump=(.*?)\\\r\\\n",
			"LB/RE=dump=",
			"RB/RE=\\\r\\\n",
			SEARCH_FILTERS,
			"Scope=Headers",
			"IgnoreRedirections=No",
			"RequestUrl=*/efsnPackage.do_userAuth*",
			LAST);

		web_submit_data("efsnPackage.do_userAuth_2",
			"Action=<url}bin-java/efsnPackage.do_userAuth",
			"Method=POST",
			"TargetFrame=",
			"RecContentType=text/html",
			"Referer=<url}bin-java/efsnPackage.do_userLoginWarning;jsessionid=<jsessionid}.tomcat<tomcat_num}?dump=<dump_01}",
			"Snapshot=t5.inf",
			"Mode=HTML",
			ITEMDATA,
			"Name=answeryes", "Value=Wait", ENDITEM,
			EXTRARES,
			"URL=../branding/opti/btn-nav-search-top_bt.png", "Referer=<url}branding/opti/stylesheet.css", ENDITEM,
			"URL=../branding/opti/bg-nav-search-top_grey.gif", "Referer=<url}branding/opti/stylesheet.css", ENDITEM,
			"URL=../branding/opti/bg-nav-search-bottom_trans.png", "Referer=<url}branding/opti/stylesheet.css", ENDITEM,
			LAST);
		}

	return 0;
}
