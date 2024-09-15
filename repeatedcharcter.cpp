#include<iostream>
#include<string>

using namespace std;
int stringcount(string s)
{
    char ch;
    int count=0;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        ch=s[i];
        for(int j=0;j<len;j++)
        {
            if(ch==s[j])
            count++;
        }
    }
    return count;
}
int main()
{
    string s1="neeraj";
    
    cout<<stringcount(s1);
    return 0;
}

