#include <iostream>

using namespace std;

int c = 0;
void generate(int t, int* a, int n) // Создает все перестановки шариков, число которых равно t
{
    if (t == n - 1)
    { //Вывод очередной перестановки
        bool p = true;
        for (int i = 0; i < n; i++) {
            if (a[i] == i + 1 && p) {
                p = false;
                c++;
            }
        }
    }
    else
    {
        for (int j = t; j < n; ++j)
        { //Запускаем процесс обмена
            swap(a[t], a[j]); //a[t] со всеми последующими
            t++;
            generate(t, a, n); //Рекурсивный вызов
            t--;
            swap(a[t], a[j]);

        }
    }
}
void ball() {
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    generate(0, a, n);
    cout << c;
}
int main() {
    ball();
}