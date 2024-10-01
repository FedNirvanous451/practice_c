#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mytext;
    ofstream myfile("test.txt");

    myfile << "Строчка с буквами и цифрами: 1, 2, 45"; // записываем в файл данные
    myfile.close();
    ifstream file("test.txt");
    while (getline  (file, mytext))
    {
        cout << mytext; // выводим содержимое файла
    }
    file.close();
}