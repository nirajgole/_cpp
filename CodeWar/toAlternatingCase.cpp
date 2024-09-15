#include <iostream>
// std::string to_alternating_case(const std::string& str)
// {
//     std::string copyStr= str;
//     for (int i = 0; i < copyStr.length(); i++)
//     {
//         if(copyStr[i]>='A' && copyStr[i]<='Z')
//             copyStr[i]+=32;
//         else if(copyStr[i]>='a' && copyStr[i]<='z')
//             copyStr[i]-=32;
//     }
    
// 	return copyStr;
// }

std::string to_alternating_case(const std::string& str)
{
  std::string s;
  
  for (auto c : str) 
    s += isupper(c) ? tolower(c) : toupper(c);
    
  return s;
}
int main(){
    std::cout<<to_alternating_case("String.prototype.toAlternatingCase");
    return 0;
}
