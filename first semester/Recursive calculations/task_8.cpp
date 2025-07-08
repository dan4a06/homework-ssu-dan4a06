#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU"); 

	float a1 = 0.5f, a2 = 0.4f, a, n;

	cout << "n="; cin >> n;
	
	if (n > 2) { //первые два числа уже известны
		for (int i = 3; i <= n; i++) {
			a = a1/(i-1) + a2/(i-2); //вычисляем i-ое число 
			a1 = a2; //a1 - i-2-ое число на следующем шаге,
			a2 = a; //a2 - i-1-oe число на следующем шаге,
			cout << "a" << i << "=" << a << endl; //n-oe число
		}
	}
	else cout << "a" << n << "=1\n";

	return 0;
}
