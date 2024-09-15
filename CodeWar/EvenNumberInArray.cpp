#include<iostream>
#include <vector>
#include<algorithm>

std::vector<int> result;

std::vector<int> evenNumbers(std::vector<int> arr, int n) {

std::vector<int> result;
// copy only even numbers:
//   auto it = std::copy_if (arr.begin(), arr.end(), result.begin(), [](int i){return (i%2==0);});
//   std::reverse(result.begin(),result.end());
//   result.resize(n);

    for(auto i = arr.rbegin();i!=arr.rend();i++)
        {
            if(n>0 && *i%2==0)
                {
                    n--;
                    result.push_back(*i);
                }
        }
    std::reverse(result.begin(),result.end());
  

  return result;
}

int main(){

//Test-1
for(auto n:evenNumbers({1, 2, 3, 4, 5, 6, 7, 8, 9},3))
    std::cout<<n<<"\t";
    return 0;
}