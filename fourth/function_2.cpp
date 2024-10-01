#include <iostream>
using namespace std;

int sign(float x) // функция, определяющая знак
{
    if (x > 0)
    {
        return 1;
    }
    else if (x == 0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int main()
{
    float x;
    cout << "Введите число: \n"; 
    cin >> x;
    cout << sign(x) << endl; // выводим результат
}