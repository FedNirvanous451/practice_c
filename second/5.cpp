#include <iostream>
using namespace std;

float function(float x) // фукнция деления
{
    return (x * x - 2 * x + 2) / (x - 1);
}

int main()
{
    setlocale(0, "");
    for (float x = -4; x != 4; x += 0.5)
    {
        if (x == 1)
        {
            cout << "x = 1 и получается деление на ноль, а оно невозможно!\n"; // условие делимости нарушено
        }
        else
        {
            cout << function(x) << " " << x << "\n"; // вывод результат
        }
    }
}