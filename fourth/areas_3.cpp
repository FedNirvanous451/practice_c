#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, p;
    int x;
    cout << "Площадь какой фигуры хотите вычислить (1-прямоугольник, 2-треугольник, 3-круг): \n";
    cin >> x;
    switch(x) // выбираем кейсы
    {
        case 1: // кейс для прямоугольника
            cout << "Введите a: \n";
            cin >> a;
            cout << "Введите b: \n";
            cin >> b;
            cout << "Ваша площадь: " << a * b << endl;
            break;
            
        case 2: // кейс для треугольника
            cout << "Введите a: \n";
            cin >> a;
            cout << "Введите b: \n";
            cin >> b;
            cout << "Введите c: \n";
            cin >> c;
            p = (a + b + c) / 2;
            cout << "Ваша площадь: " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
            break;

        case 3: // кейс для круга
            cout << "Введите радиус: \n";
            cin >> a;
            cout << "Ваша площадь: " << M_PI * a * a << endl;
            break;
    }
}