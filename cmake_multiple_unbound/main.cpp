#include <iostream>
#include <regex>

void cppVersion()
{
    if (__cplusplus == 202101L) std::cout << "C++23";
    else if (__cplusplus == 202002L) std::cout << "C++20";
    else if (__cplusplus == 201703L) std::cout << "C++17";
    else if (__cplusplus == 201402L) std::cout << "C++14";
    else if (__cplusplus == 201103L) std::cout << "C++11";
    else if (__cplusplus == 199711L) std::cout << "C++98";
    else std::cout << "pre-standard C++." << __cplusplus;
    std::cout << "\n";
}

auto DeduceReturnType();

int main()
{

    std::regex dee;

    int my_array[5] = {1, 2, 3, 4, 5};
    for(int &x : my_array)
    {
        std::cout << x << " ";
    }

    cppVersion();

    std::cout << std::endl;

    return 1;
}
