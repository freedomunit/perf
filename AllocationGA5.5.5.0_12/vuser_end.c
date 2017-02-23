vuser_end()
{

	web_url("efsnPackage.do_userLogoff",
		"URL=<url}bin-java/efsnPackage.do_userLogoff",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=<url}bin-java/efsnPackage.do_allocationCriteria?allocationtype=allocationdailytask&dump=<dump_03}",
		"Snapshot=t99.inf",
		"Mode=HTML",
		LAST);

	return 0;
}