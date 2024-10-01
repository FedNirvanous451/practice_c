#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	ifstream file("hello.txt");

	string line;
	char a;
	while (getline(file, line)) {
		for (int i = 0; i < line.length(); i++) {
			a = line[i];
			if (a == 32) {// проверяем символ равен ли он пробелу
				line[i] = '+';
			}
			cout << line[i];
		}
	}

	file.close();
}