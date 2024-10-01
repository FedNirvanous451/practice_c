#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <math.h>
using namespace std;


int to_num_10(char n) // функция для перевода числа в десятичную систему счисления
{
    int temp = 0;
    if (isdigit(n))
    {
        temp = n - '0';
        return temp;
    }
    else
    {
        switch(n)
        {
            case 'a':
                temp = 10;
                return temp;                 

            case 'b':
                temp = 11;
                return temp;                   

            case 'c':
                temp = 12;
                return temp;                   
                
            case 'd':
                temp = 13;
                return temp;
            
            case 'e':
                temp = 14;
                return temp;            

            case 'f':
                temp = 15;
                return temp;

            default:
                cout << "Невозможно!\n";
                temp = 0;
                return temp;
                break;
        }
    }
}


bool is_exist(char x, int X) // функция, определяющая существует ли число в данной системе счисления
{
    if (X > to_num_10(x))
    {
        return true;
    }
    else
    {
        return false;
    }
}


string numbers_system(string x, int X, int Y) // основная функция, выполняющая условие задачи 
{
    string y;
    reverse(x.begin(), x.end());
    int num_10 = 0;
    int len = x.size();
    for (int i = 0; i < len; i++) // перебираем цифры в числе
    {
        if (is_exist(x[i], X))
        {
            num_10 += to_num_10(x[i]) * pow(X, i); // переводим в 10-тичную сс
        }
        else
        {
            cout << "Ошибка! Вы ввели цифру, которая не содержится в данной системе счисления!\n"; // исключение
            break;
        }
    }
    while (num_10 != 0) // цикл для перевода 10-тичного числа в Y сс
    {
        if (num_10 % Y < 10)
        {
            y += to_string(num_10 % Y);
            num_10 /= Y;
        }
        else
        {
            switch(num_10 % Y) // условия для знаков больше 9
            {
                case 10:
                    y += 'a';
                    num_10 /= Y;
                    break;                 

                case 11:
                    y += 'b';
                    num_10 /= Y;
                    break;                    

                case 12:
                    y += 'c';
                    num_10 /= Y;
                    break;                    
                    
                case 13:
                    y += 'd';
                    num_10 /= Y;
                    break;    
                
                case 14:
                    y += 'e';
                    num_10 /= Y;
                    break;             

                case 15:
                    y += 'f';
                    num_10 /= Y;
                    break; 
            }
        }
    }
    reverse(y.begin(), y.end()); // реверсируем полученную строчку        
    return y; // получаем результат и возвращаем его
} 

int main()
{
    string num_1;
    int osn_1, osn_2;
    cout << "Введите первое число: \n"; // Вводим необходимые данные
    cin >> num_1;
    cout << "Введите основание для первого числа: \n";
    cin >> osn_1;
    cout << "Введите основание для второго числа: \n";
    cin >> osn_2;

    cout << numbers_system(num_1, osn_1, osn_2);
    return 0;
}