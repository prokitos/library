#include "mainInstruction.h"
#include "chars/matem.h"
#include <boost/any.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/format.hpp>

using namespace boost;

void consoleClear()
{

    for (short i = 0; i < 10; i++)
    {
        cout << "\t\n"; 
    }
    
}

int main()
{
    consoleClear();

    // boost::any value_int, value_char, value_bool;
    // value_int = 12;
    // value_char = 'H';
    // value_bool = true;

    // std::cout << boost::any_cast<int>(value_int) << std::endl;
    //piton();



    // vector <string> vec;
    // string line = "1, 2, 3, 4, 5";
    // split(vec, line, boost::is_any_of(" "));
    // for (int i = 0; i < vec.size(); i++)
    //     cout << vec[i] << " and ";  

    // int day_of_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // for(int y = 1950;y<2020;y++)
    // for(int m = 0;m<12;m++) {
    //     int days =  day_of_month[m] + (m == 1 &&  ((!(y % 4) && (y % 100)) || !(y % 400)) ? 1 : 0);
    //     cout <<(boost::format("%02d %02d %4d") % (days) % (m+1) % y) << "\n";
    // }

    int nums = 10;
    std::vector<int> vec;
    vec.reserve(nums);

    for (size_t i = 0; i < nums; i++)
    {
        vec.push_back(rand() % 100);
    }

    //std::sort(vec.begin(), vec.end(), [](const auto &a, const auto &b){return a > b;});

    using namespace boost::lambda;
    std::sort(vec.begin(), vec.end(), _1 > _2); // работает нормально только с простыми типами. структуры и классы мимо

    for(const auto &a : vec)
        std::cout << a << " " << std::endl;




    cout << "end this";
    return 0;
}

