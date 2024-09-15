#include<iostream>
using namespace std;

template<class T>
void swap(T a,T b)
{
	cout << "\nBefore Swapping : "<<"\nCh1 : "<<a<<"\tCh2 : "<<b;
	T temp;
	temp = a;
	a = b;
	b = temp;
	cout<<"\n\nAfter Swapping : "<<"\nCh1 : " << a << "\tCh2 : " << b;
}
void main()
{
	swap(10, 20);
	swap('M', 'A');
	swap(0.0023, 12.496);
}