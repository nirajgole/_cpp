#include<iostream>
using namespace std;
int main()
{
	int i = 0, j = 0;
	for (i = 0; i < 10; i++)
	{
		cout << "\n";
		for (j =10; j >i+1; j--)
		{
			cout << " ";
		}
		for (j = 0; j < i+1; j++)
		{
			cout << "*";
		}
		for (j = 0; j < i; j++)
		{
			cout << "*";
		}
	}
	for (i = 0; i < 10; i++)
	{
		cout << "\n";
		for (j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (j = 9; j > i + 1; j--)
		{
			cout << "*";
		}
		for (j = 10; j > i; j--)
		{
			cout << "*";
		}
	}
	return 0;
}