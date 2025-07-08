#include<iostream>
#include<stdio.h>
#include<time.h>
using namespace std;
/*
int** create(int n, int m) {
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
				cout << "a[" << i << "][";
				cout << j << "]=";
				cin >> a[i][j];
		}
	return a;
}
*/
int** create(int n, int m) {
	int** a = new int *[n];
	for (int i = 0; i < n; i++)
		a[i] = new int [m];
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			a[i][j] = rand() % 15;
	return a;
}

void print(int** a, int n, int m) {
	for (int i = 0; i < n; i++, cout << endl)
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
	cout << endl;
}

void summa(int** a, int n, int m) {
	int max_summa = INT_MIN;
	int c = 0;
	for (int i = 0; i < n; i++) {
		int summa_line = 0;
		for (int j = 0; j < m; j++)
			summa_line = summa_line + a[i][j];
		if (summa_line > max_summa) {
			max_summa = summa_line;
			c = i;
		}
	}
	for (int j = 0; j < m; j++)
		swap(a[0][j], a[c][j]);
}
 
int main() {
	setlocale(LC_ALL, "RU");
	int n, m;
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;
	int** a = create(n, m);
	print(a, n, m);
	cout << "------------" << endl;
	summa(a, n, m);
	print(a, n, m);
	return 0;
}