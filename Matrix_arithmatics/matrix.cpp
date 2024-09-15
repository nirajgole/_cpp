#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i = 0;
//int* allocatem(int* a, int sz)
//{
//	a = (int*)malloc(sz * sizeof(int*));
//	return a;
//}
void accept(int* a, int sz)
{
	for (i = 0; i < sz; i++)
		scanf_s("%d", a+i);
}
void display(int* a, int sz)
{
	printf("\n");
	for (i = 0; i < sz; i++)
		printf("\t%d", *(a+i));
}

void cadd(int* a, int* b, int sz)
{
	printf("\n\n addition of matrix[1]+matrix[2]=");
	int c[10];
	for (i = 0; i < sz; i++)
	{
		c[i] = *(a + i) + *(b + i);
		printf("\t%d", c[i]);
	}
	//return c;
}
void main()
{
	int a[10];
	int* a1 = a;
	int b[10];
	int* b1 = b;
	int sza = 0;
	printf("\n\nEnter Number of Elements :");
	scanf_s("%d",&sza);
	//allocatem(a,sza);
	printf("\n\nEnter Matrix[1] Elements :");
	accept(a1,sza);
	display(a1, sza);
	printf("\n\nEnter Matrix[2] Elements :");
	accept(b1,sza);
	display(b1, sza);
	//Addition of Matrix
	cadd(a1,b1,sza);
}