#include <iostream> // подключение библиотеки ввода-вывода
#include <string> // подключение библиотеки для работы со строками

using namespace std;

int romanToInt(string s) {
	int result = 0;
	for (int i = 0; i < s.size(); i++) { // цикл по символам римского числа
		switch (s[i]) { // проверяем текущий символ
		case 'I':
			if (s[i + 1] == 'V' || s[i + 1] == 'X') { // если следующий символ - V или X
				result -= 1; // вычитаем 1
			}
			else {
				result += 1; // иначе прибавляем 1
			}
			break;
		case 'V':
			result += 5; // прибавляем 5
			break;
		case 'X':
			if (s[i + 1] == 'L' || s[i + 1] == 'C') { // если следующий символ - L или C
				result -= 10; // вычитаем 10
			}
			else {
				result += 10; // иначе прибавляем 10
			}
			break;
		case 'L':
			result += 50; // прибавляем 50
			break;
		case 'C':
			if (s[i + 1] == 'D' || s[i + 1] == 'M') { // если следующий символ - D или M
				result -= 100; // вычитаем 100
			}
			else {
				result += 100; // иначе прибавляем 100
			}
			break;
		case 'D':
			result += 500; // прибавляем 500
			break;
		case 'M':
			result += 1000; // прибавляем 1000
			break;
		}
	}
	return result; // возвращаем результат
}
int main() {
	string romanNumeral; // объявляем переменную для хранения римского числа
	cin >> romanNumeral; // считываем римское число с клавиатуры
	int decimalNum = romanToInt(romanNumeral); // вызываем функцию romanToInt для преобразования римского числа в десятичное
	cout << romanNumeral << " это " << decimalNum << " В десятичной СС" << endl; // выводим результат на экран
	return 0; // завершаем программу
}