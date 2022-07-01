Action()
{
	web_url("www.google.com", 
		"URL=https://www.google.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search_25", 
		"URL=https://www.google.com/search?q={FirstString}+{SecondString}"
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}