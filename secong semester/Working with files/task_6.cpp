#include <iostream>
#include <string>
#include <fstream>
#include <math.h>

using namespace std;


int main() {
	setlocale(LC_ALL, "russian");

	float res = 1;
	string path = "myFile6.txt";
	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "Ошибка открытия файла!!!!!!!!!! " << endl;
	}
	else {
		cout << "Файл открыт!!!" << endl;
		cout << "--------------------------------------" << endl;
		float digit;
		while (!fin.eof()) {
			fin >> digit;
			cout << digit << endl;
			res *= digit;
		}
	}
	cout << "--------------------------------------" << endl;
	cout << "Произведение всех чисел = " << res << endl;
	cout << "Квадрат произведения = " << pow(fabs(res), 2) << endl;
	fin.close();
	return 0;	
}3