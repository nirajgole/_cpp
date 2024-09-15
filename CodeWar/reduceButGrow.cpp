#include<iostream>
#include <vector>

// int grow(std::vector<int> nums) {
//   int result = 1;
//   for(int i : nums)
//     result*=i;
//     return result;
// }

#include <numeric>
#include <functional>

int grow(const std::vector<int>& nums) {
  return std::accumulate(nums.cbegin(), nums.cend(), 1, std::multiplies<int>());
}

int main(){
    std::cout<<grow({4, 1, 1, 1, 4});
    return 0;
}