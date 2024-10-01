#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter num1" << " ";
    cin >> n1;
    cout << "Enter num2" << " ";
    cin >> n2;
    cout << "Sum "<< " " << n1 + n2 << " " "Difference"<< " " << n1 - n2 << " " << "Product " << " " << n1 * n2; // вывод результата
    if (n2 == 0) // проверка деления на ноль
    {
        cout << " " << "It's not possible. n2 = 0";
    }
    else
    {
        cout << " " << "Quet" << " " << n1 / n2; // вывод результата, если делитель не равен нулю
    }
}