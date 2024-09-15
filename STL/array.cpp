#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    //Sequence containers
    int arr[] = {100, 20, 300, 45, 1, 50, 65, 23};
    int *begin = &arr[0];
    int *end = &arr[0] + (sizeof(arr) / sizeof(int));

    std::sort(begin, end);
    for (; begin != end; begin++)
    {
        std::cout << "Value =>" << *begin << std::endl;
    }
    return 0;
}