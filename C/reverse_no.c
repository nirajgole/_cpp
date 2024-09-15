
#include<stdio.h>
#include<conio.h>
int main(){
int num=123,temp=0,rev_num=0,count=0,finale;
printf("\n\n\nOriginal Number : %d",num);

int i=1000;
while(num!=0){

    temp=num%10;

    printf("\n\n\nReverse Digit :%d",temp);
    i/=10;
    printf("\n\n\n i :%d",i);

    rev_num=temp*i;
    finale+=rev_num;

    num/=10;
    //count++;
    printf("\n\n\nCounter :%d",count++);

}

printf("\n\n\n%Reverse Number %d",finale);

getch();
return 0;
}
