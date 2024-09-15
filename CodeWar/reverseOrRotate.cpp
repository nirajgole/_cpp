#include<iostream>
#include <string>
#include<algorithm>



class RevRot
{
public:
    static std::string revRot(const std::string &strng, unsigned int sz){
        
        if(sz==0) return ""; 
        std::string result;
        std::string temp;
        for(auto i=0;i<strng.size();i++){

            if(strng.size()>=i+sz){
                temp.clear();
                temp = strng.substr(i,sz);
                unsigned long cubeSum=0;
                for (auto j = 0; j < temp.length(); j++)
                {
                    int num = (int)temp[j];
                    cubeSum+=(num*num*num);
                }
                if(cubeSum%2==0){                   
                    std::reverse(temp.rbegin(),temp.rend());
                    result+=temp;
                }else{
                    result+=temp.substr(1)+temp.substr(0,1);
                }
                i+=sz-1;
            }
            else
            {
                result+=strng[i];
            }
        }
        if(result.size()%sz!=0)
            result.resize(result.size()-result.size()%sz);
        return result;
    }
};

int main(){
    RevRot rev;
    // std::cout<<"     ==> "+rev.revRot("123456987654", 6)<<std::endl; // "234561876549"
    // std::cout<<"     ==> "+rev.revRot("1234", 0)<<std::endl;         // ""
    // std::cout<<"     ==> "+rev.revRot("123456987653", 6)<<std::endl; // "234561356789"
    // std::cout<<"     ==> "+rev.revRot("66443875", 4)<<std::endl;     // "44668753"
    // std::cout<<"     ==> "+rev.revRot("123456779", 8)<<std::endl;    // "23456771"
    // std::cout<<"     ==> "+rev.revRot("", 8)<<std::endl;    // ""
    // std::cout<<"     ==> "+rev.revRot("733049910872815764", 5)<<std::endl;    // "330479108928157" ------prob
    std::cout<<"     ==> "+rev.revRot("73304991087281576455176044327690580265896", 8)<<std::endl;    // "1994033775182780067155464327690480265895"
    return 0;
}