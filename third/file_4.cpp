#include <fstream>
#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    setlocale(0, "");
    string mytext;
    bool flag = false;
    ofstream myfile("test_nums.txt"); // создаем файл

    myfile << "Строчка с буквами и цифрами: 123, 22, 45"; // записываем в файл данные
    myfile.close(); // закрываем файл
    ifstream file("test_nums.txt"); // читаем файл
    while (getline  (file, mytext)) // цикл для построчного чтения
    {
        for (int i = 0; i <= mytext.size(); i++)
        {
            if (isdigit(mytext[i]))
            {
                flag = true;
                cout << mytext[i]; // вывод числа
            }
            else
            {
                if (flag)
                {
                    cout << "\n"; // условие окончания числа для перехода к следующему
                    flag = false;
                }
            }
        }
    }
    file.close();
}