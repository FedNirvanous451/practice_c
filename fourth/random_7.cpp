#include <iostream>
using namespace std;

int main()
{
    int m1 = 37, i1 = 3, c1 = 64, num1 = 85, rand_num = 2; // объявляем необходимые переменные
    cout << "I вариант\n";
    for (int j = 0; j <= 11; j++) // цикл для генерации случайных чисел
    {
        rand_num = (m1 * num1 + i1) % c1;
        num1 = rand_num + 1;
        cout << rand_num << "\n";
    }
    int m2 = 25173, i2 = 13849, c2 = 65537, num2 = 85;
    cout << "II вариант\n"; 
    for (int j = 0; j <= 11; j++) // цикл для генерации случайных чисел
    {
        rand_num = (m2 * num2 + i2) % c2;
        num2 = rand_num + 1;
        cout << rand_num << "\n";
    }
    return 0;
}