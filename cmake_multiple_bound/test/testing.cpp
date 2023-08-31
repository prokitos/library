#include "testing.h"


int mathSum(int x, int y)
{
    return x + y + 1;
};

void testCheck()
{
    int result = 0;

    if(mathSum(5,5) != 11)
        result = 1;

    if(mathSum(6,5) != 11)
        result = 1;

};









