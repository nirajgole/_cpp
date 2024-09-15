#include<stdio.h>
#include<conio.h>

void main()
{
	int a[3],i,sz;
	int* p = a;
	printf("Enter Number of Elements in array:");
	scanf_s("%d", &sz);
	printf("Enter array elements :\n\n");

	for(i=0;i<sz;i++)
	scanf_s("%d",p+i);

	for(i=0;i<sz;i++)
	printf("\t[%d]\t", *(p+i)*2);
	_getch();
	
}