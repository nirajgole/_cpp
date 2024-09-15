#include<iostream>
#include<algorithm>
#include<time.h>

unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{

    // if(a==1 || b==1 ||c==1){
    //     if((a+b+c)==3 || (a==1&&c==1)) return a+b+c;
        
    //     if(a==1)
    //         return (a+b)*c;
    //     if(b==1)
    //         {
    //             if(a>c) return a*(b+c);
    //             return (a+b)*c;
    //         }
    //     if(c==1)
    //         return a*(b+c);

    // }else{
    //     return a*b*c;
    // }

    return std::max({a + b + c, a * (b + c), (a + b) * c, a * b * c});
}

int main(){

    clock_t tStart = clock(); //clock starting

    std::cout<<expressionsMatter(1,3,1)<<std::endl;

    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC); //print total time taken
    return 0;
}