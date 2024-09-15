/*
Complete the solution so that it returns true if the 
first argument(string) passed in ends with the 2nd 
argument (also a string).
*/

#include<iostream>
#include<string>

using namespace std;

//Solution
bool solution(std::string const &str, std::string const &ending) {

        return (std::string(str.end() - ending.size(), str.end()) == ending);
}

//Tests
int main(){

    cout<<solution("abcde", "cde")<<endl;//true
    cout<<solution("abcde", "abc")<<endl;//false
    cout<<solution("abc", "")<<endl;//true
    cout<<solution("abc", "abc")<<endl;//true
    return 0;
}