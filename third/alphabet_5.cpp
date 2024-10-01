#include <iostream>
using namespace std;

int main()
{
    char alphabet[31]; // создаем массив данных
    int size = 30;
    char t;
    cout << "Введите 30 букв: \n"; // считываем данные
    cin >> alphabet;
    for (int i = 0; i < size; i++) // используем сортировку пузырьком
    {
        for (int j = size - 1; j >= i; j--)
        {
            if (alphabet[j - 1] > alphabet[j])
            {
                t = alphabet[j - 1];
                alphabet[j - 1] = alphabet[j];
                alphabet[j] = t;
            }
        }
    }
    cout << "\nОтсортированная строчка: " << alphabet; // выводим результат
}