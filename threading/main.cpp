#include <vector>
#include <thread>
#include <mutex>
#include <cmath>
#include <iostream>
#include <algorithm>

void consoleClear()
{

    for (short i = 0; i < 10; i++)
    {
        std::cout << "\t\n"; 
    }
    
}

std::mutex mutt;


void simple_thread_one()
{
    for (size_t i = 0; i < 10; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        std::cout << 10 + i << std::endl;
    }
}
void simple_thread_two()
{
    for (size_t i = 0; i < 10; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        std::cout << 100 + i << std::endl;
    }
}

void mutex_fun_one(int x)
{
    for (size_t i = 0; i < 10; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(300));

        mutt.lock();
        std::cout << x * i << " f1" << std::endl;
        mutt.unlock();
    }
}

void mutex_fun_two()
{
    
    for (size_t i = 0; i < 10; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(300));

        mutt.lock();
        std::cout << i << " f2" << std::endl;
        mutt.unlock();
    }
    
}

void thread_ref_fun(int &x)
{
    x = x * 5;
}

int thread_lambda_use(int x)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    return 100 + x;
}

int main()
{
    consoleClear();

    // использование обычных потоков. + фоновый поток.
        // std::thread t_name1(simple_thread_one);
        // t_name1.detach(); // поток фоновый (не важен), и если основной поток закончится то и этот тоже.
        // std::thread t_name2(simple_thread_two);
        // t_name2.join();
    // нужны мьютексы, так как иногда могут быть баги, и плохо печатается в консоль.


    // использование потоков с мьютексами.
        //std::thread t_name1(mutex_fun_two);
        //std::thread t_name2(mutex_fun_one, 5);
        //t_name2.join();
        //t_name1.join();

    // использование потоков, и изменение переменной
        // int a = 10;
        // std::thread t_name1(thread_ref_fun, std::ref(a));
        // t_name1.join();
        // std::cout << a;


    // использование лямбда функции для возврата значения из функции в потоке.
    // int result {};
    // std::thread lambda([&result]()
    // {
    //     result = thread_lambda_use(10);
    // });
    // lambda.join();
    // std::cout << result;

    return 0;
}

