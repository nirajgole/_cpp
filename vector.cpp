#include<iostream>
#include<vector>
using namespace std;

int main()
{

vector<int> arr(3,100);

vector<int> ::iterator it;

it=arr.begin();
it=arr.insert(it,200);


arr.push_back(100);

arr.insert(it+2,3,500);

if(arr.empty())
    cout<<"Arr is empty"<<endl;
else
    cout<<"arr is not empty"<<endl;

for(int i=0;i<arr.size();i++)
{

    cout<<arr[i]<<endl;
}


}