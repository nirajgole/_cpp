#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    map<string,int> mp;
    mp["two"]=2;
    mp.insert(make_pair("one",1));
    mp.insert(make_pair("three",3));
    mp.insert(make_pair("five",1));

    //iterate
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        cout<<i->second<<"-----"<<i->first<<endl;

    }

    multimap<int,string> mmp;
    //allows multiple key-value pair 
    mmp.insert(make_pair(1,"one"));
    mmp.insert(make_pair(2,"two"));
    mmp.insert(make_pair(3,"three"));
    mmp.insert(make_pair(4,"four"));
    mmp.insert(make_pair(5,"five"));
    mmp.insert(make_pair(5,"f i v e"));
    mmp.insert(make_pair(5,"fiivvee"));
    mmp.insert(make_pair(5,"five"));

    //iterate
    for (auto it = mmp.begin();it != mmp.end(); it++)
    {
        cout<<it->first<<"------"<<it->second<<endl;
    }

    cout<<endl;
    
    //It's Hash Map Impl--> better time complexity than 
    unordered_map<int,string> um;
    //allows multiple key-value pair 
    um.insert(make_pair(1,"one"));
    um.insert(make_pair(2,"two"));
    um.insert(make_pair(3,"three"));
    um.insert(make_pair(4,"four"));
    um.insert(make_pair(5,"five"));
    um.insert(make_pair(5,"f i v e"));
    um.insert(make_pair(5,"fiivvee"));
    um.insert(make_pair(5,"five"));


    //iterate
    for (auto it = um.begin();it != um.end(); it++)
    {
        cout<<it->first<<"------"<<it->second<<endl;
    }
    
    return 0;
}