#include<iostream>

int makeNegative(int num)
{
    // return num < 0 ? num : -num;
    //  return num > 0 ? -num : num;
     return -abs(num);
}

int main(){
    std::cout<<makeNegative(3);
    return 0;
}