#include<stdio.h>
void main()
{
	int i = 0, no = 0,sum = 0;;
	//print characters
	char p[50];
	printf("Enter String :");
	gets_s(p);
	//puts(p);

	//sorting integers and printing complete number
	for(i=0; p[i]!= '\0';i++)
	{
		
		if (p[i] >= '0' && p[i] <= '9')
			no =no*10 + (p[i]-'0');
		else
		{
			int temp = sum;
			sum = sum + no;
			/*if (sum != temp) {*/
				printf("\n\n\t Sum : %d", sum, "\n\n");
			/*}*/
			no = 0;
		}
	}
	printf("\n\n\t otofl Sum : %d", sum, "\n\n");
	//printf("\n\n\t otofl Number : %d", no, "\n\n");
}