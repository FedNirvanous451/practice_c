#include <iostream>
using namespace std;

int evklid(int a, int b) // базовый алгоритм евклида для нахождения нод
{
    if (a == 0 or b == 0)
    {
        return a + b;
    }
    else
    {
        if (a > b)
        {
            evklid(a % b, b);
        }
        else
        {
            evklid(a, b % a);
        }
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << evklid(a, b);
}