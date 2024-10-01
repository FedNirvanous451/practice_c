#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(0, "");
    double x, y, b;
    cout << "Введите x\n";
    cin >> x;
    cout << "Введите y\n";
    cin >> y;
    cout << "Введите b\n";
    cin >> b;
    if ((b - y > 0) and (b - x >= 0)) // выполнение условия
    {   
        cout << "z = " << log(b - y) * sqrt(b - x) << "\n";
    }
    else 
    {
        cout << "Не выполняется одз! Решений нет!\n"; // нарушение одз
    }
}