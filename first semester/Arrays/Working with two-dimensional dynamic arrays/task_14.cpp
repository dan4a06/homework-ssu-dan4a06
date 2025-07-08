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
			a[i][j] = rand() % 9;
	return a;
}

void print(int** a, int n, int m) {
	for (int i = 0; i < n; i++, cout << endl)
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
	cout << endl;
}

void SWAPIK(int** a, int n, int m) {
	int max = INT_MIN;
	int min = INT_MAX;
	int pos_max_i = 0;
	int pos_max_j = 0;
	int pos_min_i = 0;
	int pos_min_j = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i <= j && a[i][j] % 2 != 0 && a[i][j] >= max) {
				max = a[i][j];
				pos_max_i = i;
				pos_max_j = j;
			}
			if (i > j && a[i][j] % 2 == 0 && a[i][j] <= min) {
				min = a[i][j];
				pos_min_i = i;
				pos_min_j = j;
			}
		}
	}

	if (max != INT_MIN && min != INT_MAX)
		swap(a[pos_max_i][pos_max_j], a[pos_min_i][pos_min_j]);
	else {
		if (max == INT_MIN) cout << "Нет нечётного" << endl;
		if (min == INT_MAX) cout << "Нет чётного" << endl;
	}

}
 
int main() {
	setlocale(LC_ALL, "RU");
	int n, m;
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;
	cout << "------------" << endl;
	int** a = create(n, m);
	print(a, n, m);
	cout << "------------" << endl;
	SWAPIK(a, n, m);
	print(a, n, m);
	return 0;
}