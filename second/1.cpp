#include <iostream>
#include <math.h>

int main()
{
    double R, r, h, l;
    setlocale(0, "");
    std::cout << "Введите R:\n"; // считываем данные
    std::cin >> R;
    std::cout << "Введите r:\n";
    std::cin >> r;
    std::cout << "Введите h:\n";
    std::cin >> h;
    l = sqrt(pow(abs(R - r), 2) + pow(h, 2)); // находим корень
    std::cout << "V =" << (0.333333333) * M_PI * h * (R * R + R * r + r * r) << "\n"; // выводим объем
    std::cout << "S =" << M_PI * (R * R + (R + r) * l + r * r) << "\n"; // выводим площадь
}