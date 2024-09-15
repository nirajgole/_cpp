#include <iostream>
#include <vector>

std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    if (n < 3)
    {
        signature.resize(n);

        for (auto i = 3; i < n; i++)
        {
            signature.push_back(signature[i - 3] + signature[i - 2] + signature[i - 1]);
        }
        //    while(signature.size()!=n)
        //     signature.pop_back();
    }
    return signature;
}

int main()
{
    //Test--1
    std::vector<int> v_0 = {1, 1, 1};
    for (auto i : tribonacci(v_0, 10))
    {
        std::cout << i << "\t";
    }
    std::cout << std::endl;
    //Test--2
    std::vector<int> v_1 = {1, 2, 3};
    for (auto i : tribonacci(v_1, 2))
    {
        std::cout << i << "\t";
    }
    std::cout << std::endl;
    //Test--3
    std::vector<int> v_2 = {1, 0, 0};
    for (auto i : tribonacci(v_2, 10))
    {
        std::cout << i << "\t";
    }
    return 0;
}