#include <iostream>
#include <iostream> 
#include <Windows.h> 
#include <cmath>
using namespace std;

class Point3d
{
protected:
    int m_x = 0;
    int m_y = 0;
    int m_z = 0;

public:
    Point3d() {};

    void setValues(int x, int y, int z)
    {
        this->m_x = x;
        this->m_y = y;
        this->m_z = z;
    }

    void print()
    {
        cout << "X: " << m_x << "; " << "Y: " << m_y << "; " << "Z: " << m_z << endl;
    }

    ~Point3d() {
        cout << "Работа класса завершена";
    }

};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Point3d point;

    point.setValues(12, 34, 55);
    point.print();

    return 0;
}