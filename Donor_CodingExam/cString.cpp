#include"cString.h"
void cCopy(char *t,const char* s)
{
	while (*s != '\0')
	{
		*t = *s;
		t++;
		s++;
	}
	*t = '\0';
}
cString::cString()
{
	len = 0;
	str = '\0';
}
cString::cString(const char* n)
{
	len=strlen(n);
	str = new char[len+1];
	cCopy(str, n);
}
cString::cString(const cString& obj)
{
	len = obj.len;
	str = new char[len];
	cCopy(str, obj.str);
}
cString cString ::operator=(const cString& obj)
{
	len = obj.len;
	str = new char[len];
	cCopy(str, obj.str);
	return *this;
}
cString::~cString()
{
	delete[]str;
}
void cString::display()
{
	puts(str);
}
void cString::acceptStr()
{
	char n[20];
	cin>>n;
	this->len = strlen(n);
	str = new char[len + 1];
	cCopy(str, n);
}
//void cString::setStr(const char* nm)
//{	
//	cCopy(str,nm);
//}
//char* cString::getStr()
//{	
//	return str;
//}