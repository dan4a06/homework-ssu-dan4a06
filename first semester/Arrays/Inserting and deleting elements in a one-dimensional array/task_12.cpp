#include<iostream>
#include<stdio.h>
#include<time.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "russian");
    int n, m;
    cout << "n="; cin >> n;
    cout << "m="; cin >> m;

    int** mas = new int* [2 * n];
    for (int i = 0; i < n; i++)
        mas[i] = new int[m];
    cout << "¬ведите элементы массива:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mas[i][j];

    //заводим массив одномерный дл€ элементов новой строки 
    int* s = new int[m];
    cout << "¬ведите элементы новой строки:\n";
    for (int j = 0; j < m; j++)
        cin >> s[j];

    bool f;
    for (int j = 0; i < m; i++)
    {
        f = true;
        for (int i = 0; i < n; j++)
            if (mas[i][j] % 2 != 0) {
                f = false;
                break;
            }
        if (f)//если в строке нет нечетных 
            //то будем вставл€ть новую строку 
        {
            //выдел€ем пам€ть под новую строку 
            mas[m] = new int[n];
            //сдвиг строк на одну позицию вниз 
            for (int k = m; k > j; k--)
                for (int i = 0; i < n; i++)
                    mas[i][k] = mas[i][k-1];
            //вставл€ем новую строку  на место i-ой 
            for (int i = 0; i < n; i++)
                mas[i][j] = s[j];
            m++; //увеличиваем количество строк в массиве на 1 
            j++;
        }
    }
    //выводим новый массив 
    cout << "Ќовый массив:\n";
    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < m; j++)
            cout << mas[i][j] << "\t";
    system("pause");
	return 0;
}