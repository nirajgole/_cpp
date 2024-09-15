#include<iostream>
#include<string>
using namespace std;

int main()
{
    string sin;
    string s="neeraj";
    cout<<"Hello Wolrd!!"+ s;
    

    int len = sizeof(s);
    for(int i=0;i<len-1;i++)
        {
            if(s[i]=='e')
            sin[i]=s[i];
        }
    cout<<sin;
    return 0;
}