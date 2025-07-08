#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU"); 

	int N = 100;
	float x, eps;
	cout << "x="; cin >> x;
	cout << "eps="; cin >> eps;
	float a = 1, S = a; //��������� �������
	cout << left << setw(3) << "i\t" << setw(10) << "a\t"; //���������
	cout << setw(10) << "S" << endl;
	cout << left << setw(3) << 1 << "\t" << setw(10) << a; //1 ���
	cout << "\t" << setw(10) << S << endl;
	for (int i = 2; abs(a) > eps && i <= N; i++) { //i-�� ���
		a *= 1 / x;
		S += a;
		cout << left << setw(3) << i << "\t" << setw(10) << a;
		cout << "\t" << setw(10) << S << endl;
	}
	return 0;
}
