// задача номер 13
#include <iostream>
using namespace std;

int sum(int x)
{
    return (x / 100 + ((x / 10) % 10) + x % 10); // функция, возвращающая сумму
}

int main()
{
    int m, x;
    cin >> m;
    for (int i = 100; i <= 999; i++) // цикл, перебирающий значения от 100 до 999
    {
        if (sum(i) == m)
        {
            cout << i << "\n";
        }
    }
}