#include <iostream>         
#include <math.h>
using namespace std;

int main()
{
    setlocale(0, "");
    float S, m, r, p, a, x;
    int n;
    cout << "Введите S\n"; // считываем данные
    cin >> S;
    cout << "Введите m\n";
    cin >> m;
    cout << "Введите n\n";
    cin >> n;
    cin >> x;
    for (int i = 0; i < 100; i++)
    {
        p = i;
        r = p / 100.;
        a = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1));
        if (abs(m - a) < x) // модуль разности 
        {
            cout << p; // вывод результата
            break;
        }
        else
        {
            cout << "С вашими данными нельзя посчитать!";
        }
    }
}