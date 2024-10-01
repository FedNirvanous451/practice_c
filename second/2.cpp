#include <math.h>
#include <iostream>
using namespace std;


int main()
{
    float x, a;
    setlocale(0, "");
    cin >> x >> a;
    if (abs(x) < 1)
    {
        if (x == 0)
        {
            cout << "ОДЗ нарушено! Решений нет!"; // нарушение условия одз
        }
        else    
        {
            cout << "w = " << a * log(abs(x)); // выводим результат
        }
    }
    else
    {
        if (a - x * x >= 0)
        {
            cout << "w = " << sqrt(a - x * x); // вывод результата
        }
        else
        {
            cout << "ОДЗ нарушено! Решений нет!"; // нарушение одз
        }
    }
}