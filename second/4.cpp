#include <iostream>
using namespace std;

int main()
{
    float n;
    setlocale(0, "");
    cout << "Введите N:\n";
    cin >> n;
    for (int i {int(n) + 1}; i < int(n) + 11; i++)
    {
        cout << i << "\n"; // выводим 10 чисел после n
    }
    return 0;
}