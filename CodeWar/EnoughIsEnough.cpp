/*
Given a list lst and a number N, 
create a new list that contains each number
 of lst at most N times without reordering. 
 For example if N = 2, and the input is [1,2,3,1,2,1,2,3], 
 you take [1,2,3,1,2], drop the next [1,2] since this would lead to 
 1 and 2 being in the result 3 times, and then take 3, which leads to [1,2,3,1,2,3].
 */

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

// std::vector<int> deleteNth(std::vector<int> arr, int n)
// {
//     if(n==1){
//         std::unordered_set<int> v(arr.begin(),arr.end());
//         arr.clear();
//         arr.assign(v.begin(),v.end());
//         std::reverse(arr.begin(),arr.end());
//         return arr;
//     }

    
//     for (size_t i = 0; i < arr.size(); i++)
//     {
//         int newN = 0;
//         for (size_t j = 0; j < arr.size(); j++)
//         {
//             if(arr[i]==arr[j]){
//                 if(newN!=n){
//                     newN++;
//                 }else{
//                     arr.erase(arr.begin()+j);
//                 } 
//             }
//         }  
//     }
//     return arr;
// }

std::vector<int> deleteNth(std::vector<int> arr, int n)
{
 std::vector<int> result;
  for (int x:arr)
    if (std::count(result.begin(),result.end(), x) < n) result.push_back(x);
  return result;
}

int main(){
    
    //Test-1
    for(int n:deleteNth({20,37,20,21}, 1))
        std::cout<<n<<"\t"; //{20, 37, 21}
    //Test-2

    std::cout<<std::endl;

    for(int n:deleteNth({12 ,12, 22, 12, 32, 32, 12, 22, 32, 12, 32, 12, 12, 12, 32, 12, 32, 22 } ,5))
        std::cout<<n<<"\t"; //{12, 12, 22, 12, 32, 32, 12, 22, 32, 12, 32, 32, 22}
    
    std::cout<<std::endl;

     //Test-3
    for(int n:deleteNth({36, 36, 29, 45, 18, 39, 39, 29, 13, 29, 18, 29, 18, 36, 30, 18, 18, 36, 36, 45, 36, 45, 18, 30, 45, 30, 36, 29, 30, 39, 13, 30, 36, 29, 29, 39, 39, 36, 29, 29, 39, 30 }, 1))
        std::cout<<n<<"\t"; //{36, 29, 45, 18, 39, 13, 30}
    return 0;
}