#include <vector>
#include <thread>
#include <mutex>
#include <cmath>
#include <iostream>
#include <algorithm>
#include "simpleTimer.h"

void consoleClear()
{

    for (short i = 0; i < 10; i++)
    {
        std::cout << "\t\n"; 
    }
    
}

std::mutex mutt;
std::recursive_mutex recmutt;

void recFun(int x)
{
    // локальные пред вычисления, которым не нужна синхронизация.
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    // функция лочится
    recmutt.lock();

    // вывод числа
    std::cout << x << " ";

    // если дошло до 0. анлок и выход из всех рекурсий.
    if(x < 1)
    {
        std::cout << " end " << std::endl;
        recmutt.unlock();
        return;
    }

    // вызов рекурсивной функции
    recFun(x - 1);

    // функция анлочится при выходе из рекурсий
    recmutt.unlock();

    // локальные вычисления в конце после каждой итерации
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
}


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


class TestClass
{
public:
    void workOne()
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "work one start" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "work one end" << std::endl;
    }
    void workTwo()
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "work two start" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "work two end" << std::endl;
    }
};


void lockGuardTest()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    // создаем свою область видимости.
    {
        std::lock_guard<std::mutex> l_gward(mutt);
        std::cout << "work thread start" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "work thread end" << std::endl;
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
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

    // выполнение методов класса в потоках.
        // TestClass instanceTest;
        // std::thread classLambdaOne([&](){instanceTest.workOne();});
        // //std::thread classLambdaTwo([&](){instanceTest.workTwo();});   
        //     // есть другой способо
        // std::thread classLambdaTwo(&TestClass::workTwo, instanceTest);
        // classLambdaOne.join();
        // classLambdaTwo.join();

    // lockGuard в потоках. помощь при использовании мьютекса.
        // std::thread t_name1(lockGuardTest);
        // std::thread t_name2(lockGuardTest);
        // t_name1.join();
        // t_name2.join();

    SimpleTimer xeee;
    // recursive mutex.
        // std::thread t_name1(recFun,4);
        // std::thread t_name2(recFun,4);
        // t_name1.join();
        // t_name2.join();
        // time = 8.800

        // recFun(4);
        // recFun(4); 
        // time = 9.901
        // выйгрыш по времени из за того что 1 поток анлочит мьютекс, и без ожидания 500мс начинается второй поток.


    return 0;
}

