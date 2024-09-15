#include<iostream>
#include<vector>

std::vector<int> reverseSeq(int n) {
  std::vector<int> v;
    while(n){ v.push_back(n--); }
  return v;
}
int main(){
   
   for(auto &v : reverseSeq(10))
    std::cout<<v<<"\t";
    return 0;
}