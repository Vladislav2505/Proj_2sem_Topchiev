#include <iostream>
#include <iostream> 
#include <Windows.h> 
#include <cmath>
int main()
{
    void ClearScreen();
    using namespace std;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    while (true)
    {
        double firstNumber, secondNumber;
        char sign;
        double result;

        cout << "¬ведите первое число: ";
        cin >> firstNumber;

        cout << "¬ведите второе число: ";
        cin >> secondNumber;

        cout << ("¬ведите математический знак(+, -, *, /): ");
        cin >> sign;

        switch (sign)
        {
        case ('+'):
            result = firstNumber + secondNumber;
            cout << (result);
            break;

        case ('-'):
            result = firstNumber - secondNumber;
            cout << (result);
            break;

        case ('*'):
            result = firstNumber * secondNumber;
            cout << (result);
            break;

        case ('/'):
            if (secondNumber == 0)
            {
                cout << 0;
            }
            else
            {
                result = firstNumber / secondNumber;
                cout << (result);
            }
            break;

        default:
            cout << ("”мные люди на 0 не дел€т)))");
            break;
        }
        cout << "\n";
    }
    return 0;
}