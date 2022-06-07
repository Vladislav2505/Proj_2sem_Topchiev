// Вариант №28 
// Найти количество полных минут, прошедших с начала последнего часа.

#include <iostream>
#include <iostream> 
#include <Windows.h> 
#include <cmath>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int N;
    cout << "Секунды: ";
    cin >> N;

    N = N % 3600 / 60;

    cout << "С начала последнего часа прошло " << N << " минут";

    return 0;
}