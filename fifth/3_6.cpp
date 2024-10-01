#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream file("hello.txt"); // открываем файл и считываем данные

	string line; // объявляем переменные
	char a;
	int counter = 0;
	int min = 100000;
	while (getline(file, line)) // цикл, работающий пока в файле не закончатся строки
    {
		for (int i = 0; i < line.length(); i++) // цикл прохода по символу
        {
			a = line[i];
			counter += 1; // добавляем в счетчик 1
			if (a == 32) // если слово закончилось (символ пробел) 
            {
				if (counter < min && counter != 1) // условие минимума (если счетчик равен 1, то этот символ пробел, поэтому должны это учитывать)
                {
					min = counter - 1; // вычитаем пробел и получаем минимум
				}
                counter = 0;
			}
			cout << line[i]; // печатаем строку
		}
	}
	cout << "Минимальная длина: " << min << endl; // выводим результат

	file.close(); // закрываем файл
}
