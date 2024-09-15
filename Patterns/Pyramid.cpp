#include<iostream>
using namespace std;
int main()
{
	int i = 0, j = 0;
	for (j = 0; j < 10; j++)
	{
		cout << "\n";
		for (i = 10; i > j+1; i--)
		{
			cout << " ";
		}
		for (i = j+1; i > 0; i--)
		{
			cout << "*";
		}
		for (i = j; i > 0; i--)
		{
			cout << "*";
		}
	}
	return 0;
}