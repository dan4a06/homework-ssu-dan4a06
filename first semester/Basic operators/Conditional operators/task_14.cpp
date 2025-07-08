#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	
	int year;
	cout << "Введите любой год с 1900 по 2043: ";
	cin >> year;

	int last_digit = year % 10;
	while (year > 1911)
		year -= 12;

	switch (last_digit) {
	case 0: case 1: cout << "Белый(-ая) "; break;
	case 2: case 3: cout << "Сний(-ия) "; break;
	case 4: case 5: cout << "Зеленый(-ая) "; break;
	case 6: case 7: cout << "Красный(-ая) "; break;
	case 8: case 9: cout << "Желтый(-ая) "; break;
	}

	switch (year) {
	case 1900: cout << "крыса "; break;
	case 1901: cout << "бык "; break;
	case 1902: cout << "тигр "; break;
	case 1903: cout << "кролик "; break;
	case 1904: cout << "дракон "; break;
	case 1905: cout << "змея "; break;
	case 1906: cout << "лошадь "; break;
	case 1907: cout << "коза "; break;
	case 1908: cout << "обезьяна "; break;
	case 1909: cout << "петух "; break;
	case 1910: cout << "собака "; break;
	case 1911: cout << "кабан "; break;
	}

	system("pause");

	return 0;
}
