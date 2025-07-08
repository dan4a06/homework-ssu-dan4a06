#include<iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus"); //вывод данных русском языке

	int n; cout << "n="; cin >> n;//размер массива
	int* a = new int[n];//выделение памяти под массив

	srand((unsigned)time(NULL));// начальная точка генерации
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 15;//псевдослучайное число
		cout << a[i] << " ";
	}
	cout << endl;

	int b, c;
	cout << "b="; cin >> b;//ввод диапазона
	cout << "c="; cin >> c;
	if (b > c) swap(b, c);//замена значений, если b > c

	int k = 0;
	int sum = 0;

	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0 && (a[i] < b || a[i] > c)) { //поиск элементов
			k++;//количество элементов
			sum += a[i];//сумма значений элементов
		}

	if (!k) cout << "Таких элементов нет\n"; //k = 0
	else 
		cout << "Среднее арифметическое: " << 1.0 * sum / k << endl;
	delete[] a;
	return 0;
}