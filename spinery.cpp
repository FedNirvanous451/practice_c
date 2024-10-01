#include <iostream>
using namespace std;

int main()
{
    int a, b, c, n; // объявляем переменные
    cin >> a; // считываем данные
    cin >> b;
    cin >> c;
    n = 1;
    while (true)
    {
        if (a + b * n >= c) // условие при котором  покупатель не станет покупать спиннер, поэтому мы вычтем из данного количества 1
        {
            cout << n - 1; // выводим ответ
            break;
        }
        n += 1;
    }
}