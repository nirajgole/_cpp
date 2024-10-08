#include<iostream>
#include<vector>
#include<string>

std::string likes(const std::vector<std::string> &names)
{
    int size = names.size();

    switch (size)
    {
    case 0: return "no one likes this";
    case 1: return names[0]+" likes this";
    case 2: return names[0]+" and "+names[1]+" like this";
    case 3: return names[0]+", "+names[1]+" and "+names[2]+" like this";
    default: return names[0]+", "+names[1]+" and "+std::to_string(size-2)+" others like this";
    }
}
int main(){
    std::cout<<likes({"Alex", "Jacob", "Mark", "Max"});
    return 0;
}