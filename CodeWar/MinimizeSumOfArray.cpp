#include<iostream>
#include <vector>
#include<algorithm>

using namespace std;

int minSum (vector<int>passed)
{
sort(passed.begin(),passed.end());
auto result = 0;
for (auto i = 0; i < passed.size()/2; i++)
{
    result+= passed[i]*passed[passed.size()-i-1];
}
return result;

}

int main(){
    cout<<minSum({5,4,3,2})<<endl;//22
    return 0;
}