#ifndef STR_
#define STR_

#include<iostream>
#include<string.h>
using namespace std;
class cString
{
	char* str;
	int len;
public:
	cString();
	cString(const char*);
	cString(const cString&);
	cString operator=(const cString&);
	void display();
	void acceptStr();
	//name,adds
	void setStr(const char*);
	char* getStr();
	~cString();
};
#endif // !STR_