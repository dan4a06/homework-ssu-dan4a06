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
		cout << "������ �������� �����!!!!!!!!!! " << endl;
	}
	else {
		cout << "���� ������!!!" << endl;
		cout << "--------------------------------------" << endl;
		float digit;
		while (!fin.eof()) {
			fin >> digit;
			cout << digit << endl;
			res *= digit;
		}
	}
	cout << "--------------------------------------" << endl;
	cout << "������������ ���� ����� = " << res << endl;
	cout << "������� ������������ = " << pow(fabs(res), 2) << endl;
	fin.close();
	return 0;	
}3