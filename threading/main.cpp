#include <vector>
#include <thread>
#include <cmath>
#include <iostream>
#include <algorithm>

int result = 0;
void consoleClear()
{

    for (short i = 0; i < 10; i++)
    {
        std::cout << "\t\n"; 
    }
    
}

int normFibonachi(int input)
{
    if(input == 0)
        return 0;
    else if(input == 1)
        return 1;
    else
        return normFibonachi(input - 1) + normFibonachi(input - 2);
}

void thread1(int temp)
{
    result += normFibonachi(temp);
}

void thread2(int temp)
{
    result += normFibonachi(temp);
}

int main()
{
    consoleClear();

    std::thread t1(thread1, 42);
    std::thread t2(thread2, 42);

    t1.join();
    t2.join();

    std::cout << result;

    // с потоками скорость почти в 2 раза быстрее чем без потоков
    //std::cout << normFibonachi(42) + normFibonachi(42);

    return 0;
}

