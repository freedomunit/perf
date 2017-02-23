vuser_end()
{
	lr_think_time(3);
	
	web_url("efsnPackage.do_userLogoff", 
		"URL=https://<url}/bin-java/efsnPackage.do_userLogoff", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://<url}/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	return 0;
}