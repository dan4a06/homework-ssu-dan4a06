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
	cout << endl;

	int b, c;
	cout << "b="; cin >> b;//���� ���������
	cout << "c="; cin >> c;
	if (b > c) swap(b, c);//������ ��������, ���� b > c

	int k = 0;
	int sum = 0;

	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0 && (a[i] < b || a[i] > c)) { //����� ���������
			k++;//���������� ���������
			sum += a[i];//����� �������� ���������
		}

	if (!k) cout << "����� ��������� ���\n"; //k = 0
	else 
		cout << "������� ��������������: " << 1.0 * sum / k << endl;
	delete[] a;
	return 0;
}