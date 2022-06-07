// Вариант №28 
// Даны числа x, y. Проверить истинность высказывания. "Точка с координатами (x, y) лежит в первой или третьей четверти".

#include <iostream>
#include <iostream> 
#include <Windows.h> 
#include <cmath>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float x;
    float y;

    cout << "Введи значение x: ";
    cin >> x;
    cout << "Введи значение y: ";
    cin >> y;

    if (x > 0 && y > 0)
    {
        cout << "Точка с координатами (x, y) лежит в первой координтной четверти.";
    }
    else if (x < 0 && y < 0)
    {
        cout << "Точка с координатами (x, y) лежит в третьей координтной четверти.";
    }
    else
    {
        cout << "Точка с координатами (x, y) не лежит в первой или третьей четверти.";
    }

    return 0;
}