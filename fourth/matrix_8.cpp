#include <iostream>
#include <vector> // подключение библиотеки для работы с векторами

using namespace std;

int main() {
	int m = 3, n = 4, k = 2;

	vector<vector<int>> a(m, vector<int>(n)); // объявляем и инициализируем матрицу a
	vector<vector<double>> b(n, vector<double>(k)); // объявляем и инициализируем матрицу b
	vector<vector<double>> c(m, vector<double>(k)); // объявляем и инициализируем матрицу c

	cout << "Введите значения первой матрицы: ";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j]; // считываем значения элементов матрицы a с клавиатуры
		}
	}

	cout << "Введите значения второй матрицы: ";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cin >> b[i][j]; // считываем значения элементов матрицы b с клавиатуры
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			for (int l = 0; l < n; l++) {
				c[i][j] += a[i][l] * b[l][j]; // вычисляем элементы матрицы c
			}
		}
	}

	// Выводим результат на экран
	cout << "Выручка и коммиссии продавцов - " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}

	double max = -20;
	double min = 100000;
	double sum = 0;
	for (int i = 0; i < m; i++) {
		if (c[i][0] > max) {
			max = c[i][0]; // находим максимальную выручку
		}
		if (c[i][0] < min) {
			min = c[i][0]; // находим минимальную выручку
		}
		sum += c[i][0]; // считаем общую сумму выручки
	}
	cout << "Максимальная выручка- " << max << endl;
	cout << "Минимальная выручка- " << min << endl;

	double min2 = 10000, max2 = -999, sum2 = 0;
	for (int i = 0; i < m; i++) {
		if (c[i][1] > max2) {
			max2 = c[i][1]; // находим максимальную комиссию
		}
		if (c[i][1] < min2) {
			min2 = c[i][1]; // находим минимальную комиссию
		}
		sum2 += c[i][1]; // считаем общую сумму комиссий
	}
	cout << "Максимальная комиссия- " << max2 << endl;
	cout << "Минимальная комиссия- " << min2 << endl;
	cout << "Общая сумма заработанная- " << sum << endl;
	cout << "Общая сумма комиссий- " << sum2 << endl;
	cout << "Всего денег в обороте- " << sum + sum2 << endl;

	return 0; // завершаем программу
}