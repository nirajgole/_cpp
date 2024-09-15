//String is Character Array
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char arr_a[20];
	char arr_b[20];
	/*int sz = 0;
	printf("\n\n\tenter string(character array) size :");
	scanf_s("%", sz);
	char* arr = (int*)malloc(sz * sizeof(char));*/



	printf("\n\n\tEnter 1st String(Character Array) :");
	gets_s(arr_a);
	printf("\n\n\tEnter 2nd String(Character Array) :");
	gets_s(arr_b);
	strcat_s(arr_a, arr_b);
	printf("\n\n\tConcate String 1 & 2 :\n\n");
	puts(arr_a);
	/*printf("\n\n\t%c", arr);
	printf("\n\n\t%s", arr);
	free(arr);*/
}