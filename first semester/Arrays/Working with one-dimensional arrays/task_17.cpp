#include<iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus"); //����� ������ ������� �����

	int n; cout << "n="; cin >> n;//������ �������
	int* a = new int[n];//��������� ������ ��� ������

	srand((unsigned)time(NULL));// ��������� ����� ���������
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 15;//��������������� �����
		cout << a[i] << " ";
	}
	cout << " - �� ������������"<< endl;

	if (n % 2 == 0) {
		swap((a[n/2]), (a[(n/2)-1]));
	}
	else {
		swap((a[0]), (a[n/2]));
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << " - ����� ������������" << endl;

	delete[] a;
	return 0;
}