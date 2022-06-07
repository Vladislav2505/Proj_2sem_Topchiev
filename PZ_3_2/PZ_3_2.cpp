// Вариант №28 
// Дано целое число в диапазоне 1-7. Вывести строку — название дня недели, соответствующее данному числу.

#include <iostream>
#include <iostream> 
#include <Windows.h> 
#include <cmath>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int k;

    cout << "Введите число в диапазоне 1-7: ";
    cin >> k;

    if (k == 1)
    {
        cout << "Понедельник";
    }
    else if (k == 2)
    {
        cout << "Вторник";
    }
    else if (k == 3)
    {
        cout << "Среда";
    }
    else if (k == 4)
    {
        cout << "Четверг";
    }
    else if (k == 5)
    {
        cout << "Пятница";
    }
    else if (k == 6)
    {
        cout << "Суббота";
    }
    else if (k == 7)
    {
        cout << "Воскресенье";
    }
    else
    {
        cout << "Нет такого дня недели";
    }

    return 0;
}