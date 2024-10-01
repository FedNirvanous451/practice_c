#include <iostream>
using namespace std;

int main()
{
    int b, c;
    cout << "Enter b:" << " "; // считываем данные
    cin >> b;
    cout << "Enter c:" << " ";
    cin >> c;
    if (b == 0) // проверка для деления
    {
        cout << "Error.";
    }
    else
    {
        cout  << "Result:" << " " << float((-c)) / b << "\n"; // вывод результата
    }
}