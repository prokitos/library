

int mathSum(int x, int y)
{
    return x + y + 1;
}

int testCheck()
{
    int result = 0;

    if(mathSum(5,5) != 11)
        result = 1;

    if(mathSum(6,5) != 11)
        result = 1;

    return result;
}








int main()
{
    return testCheck();
}
