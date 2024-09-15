#include<iostream>
using namespace std;
class cload
{
	int a;
	public:
		cload();
		cload(int);
		cload operator=(cload&);
		cload operator+(cload&);
		friend ofstream& operator<<(cload&, ofstream&);
		cload operator++(int a);
		void display();
};