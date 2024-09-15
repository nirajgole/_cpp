#include<stdio.h>
#include<iostream>
#include<stdlib.h>;
#define col 3
#define row 3
void main()
{
	//initialization
	int i = 0, j = 0;
	int *a[row],*spr[10];

	//memory allocation
	for (i = 0; i < row; i++)
		a[i] = (int*)malloc(col * sizeof(int));

	printf("\n\n\nEnter Array Elemets a[3][3]:");

	//accepting array elements
	for (i = 0; i < row; i++)
	{
		printf("\n\nRow %d :\n", i);
		for (j = 0; j < col; j++)
			scanf_s("%d", &a[i][j]);
	}
	printf("\n\n ********** Original Matrix **********\n\n");
	//printing array elements
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("\t[%d]", a[i][j]);
		}
		printf("\n\n");
	}
	
	int cnt_nz = 0,cnt_z=0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (a[i][j] == 0)
				cnt_z++;
			else
				cnt_nz++;
		}
	}
	printf("\n\n\tNon-Zero Elements : %d", cnt_nz);
	printf("\n\tNumber of Zeroes : %d", cnt_z);
	//creating sparse matrix
	printf("\n\n*********** Sparse Matrix *********** ");
	//allocating memory to Sparse Matrix
	for (i = 0; i < (cnt_nz + 1); i++)
		spr[i] = (int*)malloc((sizeof(int) * col));

	printf("\n\n\t[Value] [Row] [Column]");
	spr[0][0] = cnt_nz;
	spr[0][1] = row;
	spr[0][2] = col;

	int k = 1, l = 0;
	for (i = 0; i <row; i++)
	{
		printf("\t");
		for (j = 0; j <col; j++)
		{
			if(a[i][j] != 0)
			{
				int l = 0;
				spr[k][l]=a[i][j];
				l++;
				spr[k][l] = i;
				l++;
				spr[k][l] = j;
				k++;
			}
		}
	}
	//printing sparse matrix 
	for (i = 0; i <=cnt_nz; i++)
	{
		printf("\n\n");
			for (j = 0; j < col; j++)
				printf("\t[%d]", spr[i][j]);
	}
	//deallocating memory
	for (i = 0; i < row; i++)
	{
		free(a[i]);
		free(spr[i]);
	}
	free(a);
	free(spr);
}