#include <iterator>    
#include <sstream>
#include <vector>
#include "programm.h"


std::string highestScoringWord(std::string str)
{
    std::vector<std::string> inputs;     
    std::istringstream iss(str);
    std::copy(std::istream_iterator<std::string>(iss), std::istream_iterator<std::string>(), std::back_inserter(inputs));

    std::string output {};
    int max = 0;
    for (auto items : inputs)
    {
        int temp = 0;
        for (size_t i = 0; i < items.length(); i++)
        {
            temp += items[i] - 'a';
            // bug, a = 0
            // then aaaaaa < b
        }

        if(temp >= max)
        {
            max = temp;
            output = items;
        }
        
    }
    
    return output;
}


int persistence(long long n)
{
    int result = 0;
    int tempInt = 0;
    std::string stroka;

    while(n > 9)
    {
        stroka = std::to_string(n);
        tempInt = stroka[0] - '0';
        for (int i = 1; i < stroka.length(); i++)
        {
            tempInt = tempInt * (stroka[i] - '0');
        }
        result ++;
        n = tempInt;
    }

    return result;
}