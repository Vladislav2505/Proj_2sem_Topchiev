// Вариант №28
//Дан список A размера N. Найти максимальный элемент из его элементов с нечетными номерами: A1, A3, A5, ... .

#include <iostream>
#include <iostream> 
#include <Windows.h> 
#include <cmath>

int main()
{
    using namespace std;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr[5] = { 11, 505, 44, 1, 89, };
    int n = 5;
    int max = arr[0];

    cout << "Массив: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }


    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "\nМаксимальный элемент: " << max << endl;

    return 0;
}