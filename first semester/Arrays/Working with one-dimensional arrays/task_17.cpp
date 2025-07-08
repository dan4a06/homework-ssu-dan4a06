#include<iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus"); //вывод данных русском €зыке

	int n; cout << "n="; cin >> n;//размер массива
	int* a = new int[n];//выделение пам€ти под массив

	srand((unsigned)time(NULL));// начальна€ точка генерации
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 15;//псевдослучайное число
		cout << a[i] << " ";
	}
	cout << " - ƒо перестановки"<< endl;

	if (n % 2 == 0) {
		swap((a[n/2]), (a[(n/2)-1]));
	}
	else {
		swap((a[0]), (a[n/2]));
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << " - ѕосле перестановки" << endl;

	delete[] a;
	return 0;
}