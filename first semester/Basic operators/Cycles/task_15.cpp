#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void print(string word) {
	cout << word << endl;
}

int main() {
	setlocale(LC_ALL, "RU"); 

	float a, b, h;
	print("Введите a: ");
	cin >> a;
	print("Введите b: ");
	cin >> b;
	print("Введите h: ");
	cin >> h;

	if (a > b) swap(a, b); 
	for (float x = a; x < b + h; x += h) {
		if ((x - 3) < 0) print("Корень из отрицательного цисла");
		else if (x == 1) print("Логарифм из неположительного числа");
		else if (x == 4) print("Деление на ноль");
		else {
			float y = (log(x * x + 2 * x + 1)) / (1 - sqrt(x - 3));
			cout << "X = " << x << " Y = " << y << endl;
		}
	}


	return 0;
}
