#include<iostream>
#include<stdio.h>
#include<time.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "russian");
	int n;
	cout << "n="; cin >> n;
	int* mas = new int[n];
	cout << "¬ведите элементы массива:\n";

	for (int i = 0; i < n; i++)
		cin >> mas[i];

	for (int i = 0; i < n;)
		if (mas[i] < 0) {
			for (int j = i; j < n - 1; j++)
				mas[j] = mas[j + 1];
			n--;
		}
		else i++;

	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";
	return 0;
}
