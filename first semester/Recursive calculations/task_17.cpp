#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU"); 

	float x, n;
	cout << "x = "; cin >> x;
	cout << "n = "; cin >> n;
	float a = (pow(x,3)*4)/6, S = a;
	
		for (int i = 2; i <= n; i++) {
		
			a *= -((x*x)/(i*(2*i+1)));
			S += a;
		}
		cout << "S" << n << " = " << S;

	return 0;
}
