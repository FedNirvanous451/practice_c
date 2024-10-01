#include <fstream>
#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    setlocale(0, "");
    float sum = 0, a, arr[10]; // объявляем необходимые переменные
    ofstream myfile; // открываем файл для записи
    for (int i = 0; i < 10; i++)  // цикл для ввода 10 чисел
    {
        cin >> a;
        myfile << a << endl;
        sum = sum + a;
    }
    myfile.close(); // закрываем файл после записи

    ifstream file("myfile.txt"); // открываем файл для чтения

    // Цикл для вывода содержимого файла на экран
    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }

    // Вывод суммы чисел, введенных пользователем
    cout << "Cумма= " << sum;

    // Закрытие файла после чтения
    file.close();
}