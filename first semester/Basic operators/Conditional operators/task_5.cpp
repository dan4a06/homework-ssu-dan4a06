#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	int A, X, Y;

	cout << "������� ����������� �����\n";
	cin >> A;
	cout << "������� ����������� �����\n";
	cin >> X; 
	cout << "������� ������ ����������� �����\n";
	cin >> Y;

	int b = A / 10, c = A % 10;
	int sum = b + c;
	int bn, cn, R;
	if ( A > 99 || A < 10 || X > 10 || Y > 10) cout << "������������ ����\n";
	else if (b == Y) {
		bn = (b + 2) % 10;
		cn = (c + 2) % 10;
		R = bn * 10 + cn;
		cout << "���� �����: " << R;
	}
	else if (sum % X == 0) {
		if (b < Y) {
			bn = abs(b - 5);
			cn = abs(c - 5);
			R = bn * 10 + cn;
			cout << "���� �����: " << R;
		}
		else {
			bn = (b + 5) % 10;
			cn = (c + 5) % 10;
			R = bn * 10 + cn;
			cout << "���� �����: " << R;
		}
	}
	else if (sum % X != 0) {
		if (b < Y) {
			bn = abs(b - 4);
			cn = abs(c - 4);
			R = bn * 10 + cn;
			cout << "���� �����: " << R;
		}
		else {
			bn = (b + 4) % 10;
			cn = (c + 4) % 10;
			R = bn * 10 + cn;
			cout << "���� �����: " << R;
		}
	}

	return 0;
}
