#include<stdio.h>
#include<iostream>
void StringCopy(char*,char*);
void main()
{
	char name[20];
	char *cop;
	printf("Enter String :");
	gets_s(name);
	StringCopy(name, cop);
	puts(cop);
	printf("\n\n\n");

}

void StringCopy(char* a,char *t)
{
	while (*a != '\0')
	{
		*t = *a;
		a++;
		t++;
	}
	t = '\0';
}