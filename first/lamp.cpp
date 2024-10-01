#include <iostream>
using namespace std;

int main()
{
    bool lamp, day, curtains;
    setlocale(0, "");
    cout << "На улице день?(1,0)\n"; // считываем данные
    cin >> day;
    cout << "Лампа включена?(1,0)\n";
    cin >> lamp;
    cout << "Шторы раздвинуты?(1,0)\n";
    cin >> curtains;
    if ((day && curtains) || lamp) // необходимое и достаточное условие
    {
        cout << "В комнате светло\n";
    }
    else
    {
        cout << "В комнате темно\n";
    }
}