#include<stdio.h>
int main(){
int num,fact=1,sum=0;

printf("Enter number :");
scanf("%d",&num);

for(int i=1;i<=num;i++){
        fact*=i;
        //sum+=fact;
}
printf("\n\nfactorial :%d",fact);
return 0;
}
