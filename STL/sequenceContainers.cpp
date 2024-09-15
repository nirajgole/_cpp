#include<iostream>
//contiguous memory location
#include<vector>
//doubly link list
#include<list>
#include<algorithm>
using namespace std;
int main(){
    //vector
    vector<int> v;
    v.push_back(101);
    v.push_back(200);
    v.push_back(30);
    v.push_back(40);

    sort(v.begin(),v.end());
    //Random Access Iterators
    //Iterator are similar pointers..
    vector<int>::iterator itr = v.begin();
    for(;itr!=v.end();itr++){
        cout<<"Value => "<<*itr<<endl;
    }

    cout<<"Size =>"<<v.size()<<endl;
    v.clear();

    cout<<"Size =>"<<v.size()<<endl;

    //list
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);

    //List is Bidirectional iterator
    //Iterator are similar pointers..
    auto it = l.begin();

    for(;it!=l.end();it++){
        cout<<"Value => "<<*it<<endl;
    }

    cout<<"Size =>"<<l.size()<<endl;
    l.clear();

    cout<<"Size =>"<<l.size()<<endl;


    return 0;
}

