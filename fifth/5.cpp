#include <iostream>
#include <fstream>
#include <string>
#include <set>

using namespace std;


int main() {
    ifstream txt("5.txt"); // открытие файла
    ofstream fout;
    set<string> sorted_words;
    string new_word, word="", s;
    
    while (getline(txt, s)) {
	sorted_words.insert(s); // чтение слов с файла
    }
    
    for (auto it = sorted_words.begin(); it != sorted_words.end(); it++) {
        cout << *it << endl; // вывод отсортированных слов
    }
    cout << "Введите новое слово: ";
    cin >> new_word;
    sorted_words.insert(new_word); // добавление нового слова


    txt.close(); // закрытие файла
    fout.open("5.txt"); // открытие файла для записи

    for (auto it = sorted_words.begin(); it != sorted_words.end(); it++) {
        fout << *it << endl; // записи отсортированного набора слов, в том числе нового
    }
}

