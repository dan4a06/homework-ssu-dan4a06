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
	print("������� a: ");
	cin >> a;
	print("������� b: ");
	cin >> b;
	print("������� h: ");
	cin >> h;

	if (a > b) swap(a, b); 
	for (float x = a; x < b + h; x += h) {
		if ((x - 3) < 0) print("������ �� �������������� �����");
		else if (x == 1) print("�������� �� ���������������� �����");
		else if (x == 4) print("������� �� ����");
		else {
			float y = (log(x * x + 2 * x + 1)) / (1 - sqrt(x - 3));
			cout << "X = " << x << " Y = " << y << endl;
		}
	}


	return 0;
}
