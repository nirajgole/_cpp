#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>

int nbDig(int,int);

int main(){
    std::cout<<nbDig(5750,0)<<std::endl;
    std::cout<<nbDig(12224,8);
    return 0;
}

int nbDig(int n, int d){

    std::string res;
    for (int i = d; i <= n; i++)
        res += std::to_string(i*i);
        
    return std::count(res.begin(),res.end(),(d+'0'));
}