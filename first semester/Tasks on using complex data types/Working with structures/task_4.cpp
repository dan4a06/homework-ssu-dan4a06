#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
using namespace std;
/*Создать структуру People, содержащую следующие данные: ФИО, дату 
рождения. Вводится количество людей и данные каждого человека. 
Вводится дата в формате dd.mm.yyyy (например, 12.12.2020). Вывести 
данные о людях, которым на момент введенной даты исполнилось 60 лет. */

struct People {
    string FIO;
    string date;
}; 

People* create(int& n) {
    cout << "Кол-во людей: ";
    cin >> n;
    People* a = new People[n];
    for (int i = 0; i < n; i++) {
        cout << "Введите ФИО: ";
        getline(cin, a[i].FIO);
        cout << "Дату рождения:";
        getline(cin, a[i].date);
    }
    return a;
}

int STR_date(string str, int i, int j) {
    string str1 = str.substr(i, j);
    const char* sd = str1.c_str();
    int digit = atoi(sd);
    return digit;
}

int main() {
    setlocale(LC_ALL, "RU");
    int n; string date;
    cout << "Введите дату: "; getline(cin, date);
    People* a = create(n); 
    for (int i = 0; i < n; i++) {
        cout << a[i].FIO;
    }
    for (int i = 0; i < n; i++) {
        if (STR_date(a[i].date, 0, 2) >= STR_date(date,0,2) && STR_date(a[i].date, 3, 2) >= STR_date(date,3,2) && STR_date(date, 6, 4) - STR_date(a[i].date, 6, 4) >= 60);
        cout << a[i].FIO;
    }

    return 0;
}
