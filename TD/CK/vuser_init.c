/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 1096
   ------------------------------------------------------------------------------- */

vuser_init()
{

//	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_url("<url}", 
		"URL=https://<url}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		"Url=/branding/7thonline/7thonline_logo.svgz", "Referer=https://<url}/branding/7thonline/login.css", ENDITEM, 
		"Url=/branding/7thonline/os_bg.jpg", "Referer=https://<url}/branding/7thonline/login.css", ENDITEM, 
		"Url=/branding/7thonline/login.gif", "Referer=https://<url}/branding/7thonline/login.css", ENDITEM, 
		"Url=/branding/7thonline/bg_password.gif", "Referer=https://<url}/branding/7thonline/login.css", ENDITEM, 
		"Url=/branding/7thonline/bg_username.gif", "Referer=https://<url}/branding/7thonline/login.css", ENDITEM, 
		"Url=/branding/7thonline/button_bg.gif", "Referer=https://<url}/branding/7thonline/login.css", ENDITEM, 
		"Url=/images/common/loadingAnimation.gif", "Referer=https://<url}/bin-java/login?f=general/login.htm", ENDITEM, 
		"Url=/branding/7thonline/x.gif", "Referer=https://<url}/branding/7thonline/login.css", ENDITEM, 
		LAST);

	web_add_cookie("map=true; DOMAIN=<url}");

/*Correlation comment: Automatic rules - Do not change!  
Original value='DEDD162605CFC70F97FCFA98BBD962E9' 
Name ='jsessionid' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=jsessionid",
		"RegExp=jsessionid=(.*?)\\.tomcat",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Headers",
		"RequestUrl=*/efsnPackage.do_userAuth*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='170' 
Name ='tomcatNum' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=tomcatNum",
		"RegExp=\\.tomcat(.*?)\\?dump",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Headers",
		"RequestUrl=*/efsnPackage.do_userAuth*",
		LAST);

/*Correlation comment - Do not change!  Original value='0.46456931036132487' Name ='dump_01' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=dump_01",
		"RegExp=dump=(.*?)\\\r\\\n",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/efsnPackage.do_userAuth*",
		LAST);
		
	web_reg_find("Text=Warn",
		"SaveCount=warn_count",
		LAST);			

	web_submit_data("efsnPackage.do_userAuth", 
		"Action=https://<url}/bin-java/efsnPackage.do_userAuth", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://<url}/bin-java/login?f=general/login.htm", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value=<userName}", ENDITEM, 
		"Name=passwd", "Value=<passwd}", ENDITEM, 
		"Name=login", "Value=Wait", ENDITEM, 
		"Name=map", "Value=on", ENDITEM, 
		LAST);
		
	if (atoi(lr_eval_string("<warn_count}")) > 0){	
	
	/*Correlation comment - Do not change!  Original value='Workflow?dump=1' Name ='logicWorkflowDump' Type ='Manual'*/
/*		web_reg_save_param_regexp(
			"ParamName=logicWorkflowDump",
			"RegExp=efsnPackage\\.do_logical(.*?)'\\)",
			SEARCH_FILTERS,
			"Scope=Body",
			"IgnoreRedirections=Yes",
			"RequestUrl=*//*efsnPackage.do_userGoHome*",
			LAST); */
	
	/*Correlation comment - Do not change!  Original value='Home?dump=1' Name ='GoHomeDump' Type ='Manual'*/
/*		web_reg_save_param_regexp(
			"ParamName=GoHomeDump",
			"RegExp=efsnPackage\\.do_userGo(.*?)\\\r\\\n",
			SEARCH_FILTERS,
			"Scope=Headers",
			"IgnoreRedirections=No",
			"RequestUrl=*//*efsnPackage.do_userAuth*",
			LAST);*/

		lr_think_time(3);
			
			
		if (atoi(lr_eval_string("<singleRunSecurity}")) == 1){			
		/*Correlation comment - Do not change!  Original value='0.2705653695988235' Name ='dump_03' Type ='Manual'*/
			web_reg_save_param_regexp(
				"ParamName=dump_03",
				"RegExp=dump=(.*?)\">Security\\ Setup",
				SEARCH_FILTERS,
				"Scope=Body",
				"IgnoreRedirections=No",
				LAST);				
		}				
	
		web_submit_data("efsnPackage.do_userAuth_2",
			"Action=https://<url}/bin-java/efsnPackage.do_userAuth",
			"Method=POST",
			"TargetFrame=",
			"RecContentType=text/html",
			"Referer=https://<url}/bin-java/efsnPackage.do_userLoginWarning;jsessionid=<jsessionid}.tomcat<tomcatNum}?dump=<dump_01}",
			"Snapshot=t3.inf",
			"Mode=HTML",
			ITEMDATA,
			"Name=answeryes", "Value=Wait", ENDITEM,
			EXTRARES,
			"URL=../branding/7thonline/btn-nav-search-top_bt.png", "Referer=https://<url}/branding/7thonline/stylesheet.css", ENDITEM,
			"URL=../branding/7thonline/bg-nav-search-top_grey.gif", "Referer=https://<url}/branding/7thonline/stylesheet.css", ENDITEM,
			"URL=../branding/7thonline/sidetab_bt.png", "Referer=https://<url}/branding/7thonline/stylesheet.css", ENDITEM,
			"URL=../images/common/checkbox_s.gif", "Referer=https://<url}/bin-java/efsnPackage.do_userGoHome?dump=1", ENDITEM,
			"URL=../branding/7thonline/bg-nav-search-bottom_trans.png", "Referer=https://<url}/branding/7thonline/stylesheet.css", ENDITEM,
			"URL=../images/common/tip.gif", "Referer=https://<url}/javascript/7thonline_default_v4.css", ENDITEM,
			LAST);
		
	
		web_url("efsnPackage.do_logicalWorkflow",
			"URL=https://<url}/bin-java/efsnPackage.do_logicalWorkflow?dump=1",
			"TargetFrame=",
			"Resource=0",
			"RecContentType=text/html",
			"Referer=https://<url}/bin-java/efsnPackage.do_userGoHome?dump=1",
			"Snapshot=t4.inf",
			"Mode=HTML",
			LAST);
		
	} else {
	
	
	
		if (atoi(lr_eval_string("<singleRunSecurity}")) == 1){			
		/*Correlation comment - Do not change!  Original value='0.2705653695988235' Name ='dump_03' Type ='Manual'*/
			web_reg_save_param_regexp(
				"ParamName=dump_03",
				"RegExp=dump=(.*?)\">Security\\ Setup",
				SEARCH_FILTERS,
				"Scope=Body",
				"IgnoreRedirections=No",
				LAST);				
		}		
	
	
		web_submit_data("efsnPackage.do_userAuth_2_1",
			"Action=https://<url}/bin-java/efsnPackage.do_userGoHome?dump=1",
			"Method=POST",
			"TargetFrame=",
			"RecContentType=text/html",
			"Referer=https://<url}/bin-java/login?f=general/login.htm",
//			"Referer=https://<url}/bin-java/efsnPackage.do_userLoginWarning;jsessionid=<jsessionid}.tomcat<tomcatNum}?dump=<dump_01}",
//			"Snapshot=t3.inf",
			"Mode=HTML",
//			EXTRARES,
//			"URL=../branding/7thonline/btn-nav-search-top_bt.png", "Referer=https://<url}/branding/7thonline/stylesheet.css", ENDITEM,
//			"URL=../branding/7thonline/bg-nav-search-top_grey.gif", "Referer=https://<url}/branding/7thonline/stylesheet.css", ENDITEM,
//			"URL=../branding/7thonline/sidetab_bt.png", "Referer=https://<url}/branding/7thonline/stylesheet.css", ENDITEM,
//			"URL=../images/common/checkbox_s.gif", "Referer=https://<url}/bin-java/efsnPackage.do_userGoHome?dump=1", ENDITEM,
//			"URL=../branding/7thonline/bg-nav-search-bottom_trans.png", "Referer=https://<url}/branding/7thonline/stylesheet.css", ENDITEM,
//			"URL=../images/common/tip.gif", "Referer=https://<url}/javascript/7thonline_default_v4.css", ENDITEM,
			LAST);	
	
	
	
		web_url("efsnPackage.do_logicalWorkflow_01", 
				"URL=https://<url}/bin-java/efsnPackage.do_logicalWorkflow?dump=1", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
//				"Referer=https://<url}/bin-java/efsnPackage.do_userGoHome;jsessionid=<jsessionid}.tomcat<tomcatNum}?dump=<dump_01}",
				"Referer=https://<url}/bin-java/efsnPackage.do_userGoHome?dump=1",
				"Snapshot=t89.inf", 
				"Mode=HTML", 
				LAST);		
			
	}
	

	return 0;
}
