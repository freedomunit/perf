vuser_end()
{

	web_url("efsnPackage.do_userLogoff", 
		"URL=http://10.125.2.182/bin-java/efsnPackage.do_userLogoff", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.125.2.182/bin-java/efsnPackage.do_allocationCriteria?allocationtype=allocationdailytask&dump=0.36669907063019247", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}