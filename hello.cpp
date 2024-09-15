#include <iostream>
#include<string>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}

void display(char *s) //void display(char s[])
{
    cout << "Entered char array is: " << s << endl;
}

void display(string s)
{
    cout << "Entered string is: " << s << endl;
}

int main()
{
    int firstNumber=0;
    int secondNumber=0;
    char str[10];
    string str1;
   
    cout<<"Hello World!!!"<<endl;

    //summation
    // cout<<"Enter First Number :"<<endl;
    // cin>>firstNumber;
    // cout<<"Enter First Number :"<<endl;
    // cin>>secondNumber;

    // cout<<"Summation ::"<<sum(firstNumber,secondNumber);

    cout<<"Enter Your Surname:"<<endl;
    getline(cin,str1);

    cout<<"Enter Your Name:"<<endl;
    cin.get(str,100);   
    
    display(str);
    display(str1);
    return 0;

}

