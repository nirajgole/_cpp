#include<iostream>
// #include<string>
// #include<algorithm>

// bool compare(std::string s1, std::string s2)
// {
//     int sum_s1=0;
//     int sum_s2=0;

//     std::transform(s1.begin(),s1.end(),s1.begin(),::toupper);
//     std::transform(s2.begin(),s2.end(),s2.begin(),::toupper);
//     for(char c:s1)
//     {
//         if(c<'A' || c>'Z')
//         {
//             sum_s1=0;
//             break;
//         }
//         sum_s1+=c;
//     }
//     for(char d:s2)
//     {
//         if(d<'A' || d>'Z')
//         {
//             sum_s2=0;
//             break;
//         }
//         sum_s2+=d;
//     }

//     if(sum_s1==sum_s2)
//         return true;
//     else
//         return false;

// }
// Calculate the char-value of the string
int charvalue(std::string s){
  int sum = 0;

  for(char &c : s){
    if(!std::isalpha(c))
      return 0;
    
    sum += std::toupper(c);
  }
  
  return sum;
}

bool compare(std::string s1, std::string s2)
{
    return charvalue(s1) == charvalue(s2);
}

int main(){
    std::cout<<compare("AD", "BC")<<std::endl;//true
    std::cout<<compare("AD", "DD")<<std::endl;//false
    std::cout<<compare("Ad", "DD")<<std::endl;//false
    std::cout<<compare("FG", "gf")<<std::endl;//true
    std::cout<<compare("zz1", "")<<std::endl;//true
    return 0;
}