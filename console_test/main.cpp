#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <windows.h>
#include <locale>



void consoleClear()
{

    for (short i = 0; i < 10; i++)
    {
        std::cout << "\t\n"; 
    }
    
}

std::string GetRandomStr()
{
    srand(time(0));
    std::string randChar = {"qwertyuiopasdfghjklzxcvbnm1234567890"};
    int lenChar = randChar.length();
    int lenName = 20;
    std::string result {};

    for (size_t i = 0; i < lenName; i++)
    {
        result += randChar[rand() % lenChar];
    }
    
    return result;
}


int main()
{
    consoleClear();

    // рандомное название консоли
    std::string nameConsole = GetRandomStr();
    SetConsoleTitle(nameConsole.c_str());

    // получение дескриптора окна
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // смена цвета текста, и вывод русского и английского текста
    SetConsoleTextAttribute(hConsole,2);
    std::cout << "русскй текст" << std::endl;
    SetConsoleTextAttribute(hConsole,3);
    std::cout << "english text" << std::endl;
    //SetConsoleTextAttribute(hConsole,BACKGROUND_BLUE);

    // установка курсора в программе
    COORD cursor;
    cursor.X = 5;  cursor.Y = 5;
    SetConsoleCursorPosition(hConsole,cursor);

    // скрыть курсор в консоле
    CONSOLE_CURSOR_INFO cInfo;
    GetConsoleCursorInfo(hConsole,&cInfo);
    cInfo.bVisible = false;
    SetConsoleCursorInfo(hConsole,&cInfo);

    // вывод МСГ бокса. нажав с контролом на MB_OK можно посмотреть все иконки которые есть.
    MessageBox(NULL, "Текст окна","Заголовок", MB_OK | MB_ICONASTERISK);

    // include <conio.h>
    //  _getch()  getche() = мы пишем символ, отображать/не отображать этот символ на экран.
    //  getchar() = пишем и отображает на экране текст, пока не будет нажат ентер.

    std::system("pause"); 
    return 0;
}

