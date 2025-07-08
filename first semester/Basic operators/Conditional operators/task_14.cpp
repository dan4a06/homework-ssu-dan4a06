#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	
	int year;
	cout << "������� ����� ��� � 1900 �� 2043: ";
	cin >> year;

	int last_digit = year % 10;
	while (year > 1911)
		year -= 12;

	switch (last_digit) {
	case 0: case 1: cout << "�����(-��) "; break;
	case 2: case 3: cout << "����(-��) "; break;
	case 4: case 5: cout << "�������(-��) "; break;
	case 6: case 7: cout << "�������(-��) "; break;
	case 8: case 9: cout << "������(-��) "; break;
	}

	switch (year) {
	case 1900: cout << "����� "; break;
	case 1901: cout << "��� "; break;
	case 1902: cout << "���� "; break;
	case 1903: cout << "������ "; break;
	case 1904: cout << "������ "; break;
	case 1905: cout << "���� "; break;
	case 1906: cout << "������ "; break;
	case 1907: cout << "���� "; break;
	case 1908: cout << "�������� "; break;
	case 1909: cout << "����� "; break;
	case 1910: cout << "������ "; break;
	case 1911: cout << "����� "; break;
	}

	system("pause");

	return 0;
}
