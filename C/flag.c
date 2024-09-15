
//check given number is prime or not
#include<stdio.h>

int main(){
int no;
printf("Enter Number");
scanf("%d",no);
CheckPrime(no);
return 0;
}
CheckPrime(int n){
    for (int i=2;i<no;i++){
        if(no%i==0){
            printf("Not Prime");
            break;
    }
        if(i==no)
            printf("It's Prime");
}
}

