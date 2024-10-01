#include <iostream> // подключение библиотеки ввода-вывода
#include <cmath> // подключение библиотеки математических функций

using namespace std;

int main() {
	const double PI = 3.14159265; // объявление константы Пи
	const int WIDTH = 80; // ширина графика
	const int HEIGHT = 15; // высота графика
	const double X_START = -PI; // начальное значение по оси x
	const double X_END = PI; // конечное значение по оси x
	const double Y_START = -1.0; // начальное значение по оси y
	const double Y_END = 1.0; // конечное значение по оси y

	double x_step = (X_END - X_START) / WIDTH; // шаг по оси x
	double y_step = (Y_END - Y_START) / HEIGHT; // шаг по оси y

	for (double y = Y_END; y >= Y_START; y -= y_step) { // цикл по оси y с шагом y_step, начиная с Y_END и заканчивая Y_START
		for (double x = X_START; x <= X_END; x += x_step) { // цикл по оси x с шагом x_step, начиная с X_START и заканчивая X_END
			double sin_value = sin(x); // вычисление значения функции sin(x)
			if (sin_value >= y) { // если значение функции больше или равно текущему значению по оси y
				cout << "*"; // вывод символа на экран
			}
			else { // если значение функции меньше текущего значения по оси y
				cout << " "; // вывод пробела на экран
			}
		}
		cout << endl; // переход на новую строку
	}

	return 0; // завершение программы
}