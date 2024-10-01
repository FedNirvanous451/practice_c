#include <iostream>
using namespace std;

int erato(int m, int n, int* a) // функция для решета эратосфена
{
    int j;
    if (m >= n)
    {
        return 0;
    }
    else
    {
        if (a[m] == 0)
        {
            m += 1;
            erato(m, n, a);
        }
        else
        {
            j = m * 2;
            if (j < n)
            {
                while (j < n)
                {
                    a[j] = 0;
                    j += m;
                }
                m += 1;
                erato(m, n, a);
            }
            else
            {
                m += 1;
                erato(m, n, a);
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n;
    int a[n] {};
    for (int i = 0; i < n; i++) // цикл для ввода чисел
    {
        a[i] = i;
    }
    a[1] = 0;
    m = 2;
    erato(m, n, a);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            cout << a[i] << endl;
        }
    }

}