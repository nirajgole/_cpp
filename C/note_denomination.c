// 4444 = 2000*2,200*2,20*2,2*2

#include<stdio.h>
fun(int);
int main(void){
int amount,total;
printf("Enter total amount :");
scanf("%d",&amount);

total=fun(amount);
printf("\t\t\t\n\t\t\t\t\nTotal number of notes :%d",total);

return 0;
}

fun(int no){
int c2000=0,c500=0,c200=0,c100=0,c50=0,c20=0,c10=0,c5=0,c2=0,totalc=0;

//no=5444;
if(no>=2000)
    c2000=no/2000;
    no%=2000;

if(no>=500)
    c500=no/500;
    no%=500;

if(no>=200)
    c200=no/200;
    no%=200;

if(no>=100)
    c100=no/100;
    no%=100;

if(no>=50)
    c50=no/50;
    no%=50;

if(no>=20)
    c10=no/20;
    no%=20;

if(no>=10)
    c10=no/10;
    no%=10;

if(no>=5)
    c5=no/5;
    no%=5;

if(no>=2)
    c2=no/2;
    no%=2;

totalc=c2000+c500+c200+c100+c50+c20+c10+c5+c2;

return totalc;
}
