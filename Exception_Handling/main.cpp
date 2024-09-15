#include<iostream>
using namespace std;
void main()
{
	int a=0,b=0;
	cout << "\nEnter Two Numbers :";
	cin >> a >> b;
	cout << a << b;
	int l = 0;
	try {
		if (b == 0)
			throw l;
		cout << (a / b);
	}
	catch (...)
	{
		cout << "\nValue of B is Zero.";
	}
}