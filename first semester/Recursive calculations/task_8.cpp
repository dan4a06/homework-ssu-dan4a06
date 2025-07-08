#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU"); 

	float a1 = 0.5f, a2 = 0.4f, a, n;

	cout << "n="; cin >> n;
	
	if (n > 2) { //������ ��� ����� ��� ��������
		for (int i = 3; i <= n; i++) {
			a = a1/(i-1) + a2/(i-2); //��������� i-�� ����� 
			a1 = a2; //a1 - i-2-�� ����� �� ��������� ����,
			a2 = a; //a2 - i-1-oe ����� �� ��������� ����,
			cout << "a" << i << "=" << a << endl; //n-oe �����
		}
	}
	else cout << "a" << n << "=1\n";

	return 0;
}
