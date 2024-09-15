#include<iostream>
#include<string.h>
using namespace std;
int main()
{	
	char name[20];

	cout << "\n\n************************************************************\n";
	cin >> name;
	cout << name<<"\n\n";

	/*cout << "\n\n************************************************************\n";
	gets_s(name);
	puts(name);*/

	cout << "\n\n************************************************************\n";
	cin.getline(name, 20);
	cout << "\n\n"<<name<<"\n\n";
	return 0;
}