#include <iostream>         
#include <math.h>
using namespace std;

int main()
{
    setlocale(0, "");
    float S, p, r;
    int n;
    cout << "Введите S\n"; // считываем данные 
    cin >> S;
    cout << "Введите p\n";
    cin >> p;
    cout << "Введите n\n";
    cin >> n;

    r = p / 100;
    if ((pow(1 + r, n) - 1 != 0))
    {
        cout << "m =" << S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1)); // вывод результата задачи
    }
    else
    {
        cout << "Знаменатель равен нулю - действие не может быть выполнено"; // нарушение условия делимости
    }
}