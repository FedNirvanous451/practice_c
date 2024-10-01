#include <iostream>
using namespace std;

int main()
{
        for (int z = 0; z < 4; z++)
        {
            for (int j = 0; j < 12; j++) // вложенный цикл для вывода звездочек и палочек
            {
                cout << "*";
            }
            for (int k = 0; k < 24; k++)
            {
                cout << "_";
            }
            cout << "\n";
        }
        for (int x = 0; x < 9; x++)
        {
            for (int k = 0; k < 36; k++) // добавочный вложенный цикл для остаточных палочек
            {
                cout << "_";
            }
            cout << "\n";
        }
    }