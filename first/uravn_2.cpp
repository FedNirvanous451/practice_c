#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    float a, b, c;
    setlocale(0, "");
    cout << "Enter a\n"; // считываем данные
    cin >> a;
    cout << "Enter b\n";
    cin >> b;
    cout << "Enter c\n";
    cin >> c;
    if (a == 0) // дерево условий для получения корней уравнения
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "X - любое\n";
            }
            else
            {
                cout << "Нет решенеий\n";
            }

        }
        else
        {
            cout << float((-c)) / b << "\n";
        }
    }
    else
    {
        float d, j, k;
        d = b * b - 4 * a * c;
        if (d < 0)
        {
            cout << "Нет решений\n";
        }

        else if (d == 0)
        {
            cout << "X = " << (-b) / 2 * a << "\n";
        }

        else
        {
        j = (-b + sqrt(d)) / 2 * a;
        k = (-b - sqrt(d)) / 2 * a;
        cout << "X1 = " << j; // вывод результатов
        cout << "\nX2 = " << k << "\n";
        }
    }
}
