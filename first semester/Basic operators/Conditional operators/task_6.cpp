#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	float X;
	cout << "X = ";
	cin >> X;
	if (X < -5) cout << "������ �� �������������� �����\n";
	else if (X == -1) cout << "������� �� ����\n";
	else if (X > 4) cout << "�������� ���������������� �����\n";
	else {
		float Y = (sqrt(X + 5) + log(8 - 2 * X)) / sqrt(X * X + 2 * X + 1);
		cout << "F = " << Y << endl;
	}

	system("pause");

	return 0;
}
