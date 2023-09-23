#include "mainInstruction.h"
#include "chars/matem.h"

#include <boost/any.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/format.hpp>
#include <boost/lambda/lambda.hpp>
#include <boost/algorithm/cxx11/all_of.hpp>
#include <boost/date_time.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#include "boost/lexical_cast.hpp"
#include "boost/filesystem.hpp"

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

    // int nums = 10;
    // std::vector<int> vec;
    // vec.reserve(nums);

    // for (size_t i = 0; i < nums; i++)
    // {
    //     vec.push_back(rand() % 100);
    // }

    // //std::sort(vec.begin(), vec.end(), [](const auto &a, const auto &b){return a > b;});

    // using namespace boost::lambda;
    // std::sort(vec.begin(), vec.end(), _1 > _2); // работает нормально только с простыми типами. структуры и классы мимо

    // for(const auto &a : vec)
    //     std::cout << a << " " << std::endl;
    

    // std::string temp = "test stroka for tests";
    // std::cout << replace_first_copy(temp, " ", "-") << std::endl;
    // std::cout << replace_last_copy(temp, " ", "-") << std::endl;
    // std::cout << replace_all_copy(temp, " ", "-") << std::endl;
    // std::cout << std::endl << std::endl;


    // int mass[] = {2,3,4,5};
    // for(auto i : mass)
    //     std::cout << i << " ";

    // using namespace boost::lambda;
    // //bool temps = boost::algorithm::all_of(mass, _1 > 1);
    // bool temps = boost::algorithm::all_of(mass, mass + 4, _1 > 1);
    // std::cout << std::endl;
    // if(temps == true)
    //     std::cout << "all digits more then 1";
    // else
    //     std::cout << "this mass has digit less then 1";

    //boost::gregorian::date TestTime(1941, 5, 22);
    //int day = boost::gregorian::gregorian_calendar::day_of_week(boost::gregorian::date::ymd_type(1941, 5, 22));
    //std::cout << (day);  // можно добавить метод который преобразовывает число в название дней недели.
    //boost::multiprecision::int1024_t tem = 123623436536326;

    int s = 23;
    std::string s1 = lexical_cast<string>(s);

    int a1 = s1[0];
    int a2 = lexical_cast<int>(s1[0]);

    cout << "normal " << a1 << endl;
    cout << "boost  " << a2 << endl;


    std::string temp = "test stroka for tests";
    std::cout << replace_first_copy(temp, " ", "-") << std::endl;
    std::cout << replace_last_copy(temp, " ", "-") << std::endl;
    std::cout << replace_all_copy(temp, " ", "-") << std::endl;
    std::cout << std::endl << std::endl;


    int mass[] = {2,3,4,5};
    for(auto i : mass)
        std::cout << i << " ";

    
    using namespace boost::lambda;
    //bool temps = boost::algorithm::all_of(mass, _1 > 1);
    bool temps = boost::algorithm::all_of(mass, mass + 4, _1 > 1);
    std::cout << std::endl;
    if(temps == true)
        std::cout << "all digits more then 1";
    else
        std::cout << "this mass has digit less then 1";

    

    std::cout << std::endl << std::endl;
    cout << "end this";
    return 0;
}

