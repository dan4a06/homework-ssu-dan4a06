#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <limits.h>

using namespace std;


int main() {
	setlocale(LC_ALL, "russian");


	int min = INT_MAX;
	string res;
	string path = "myFile15.txt";
	ifstream fin;
	fin.open(path);


	if (!fin.is_open()) {
		cout << "Ошибка открытия файла!!!!!!!!!! " << endl;
	}


	else {
		cout << "Файл открыт!!!" << endl;
		cout << "--------------------------------------" << endl;
		string str;
		int date;

		while (!fin.eof()) {
			fin >> str;
			int i = str.size();
			cout << str << " ";
			date = stoi(str.substr(i - 4));
			cout << date << endl;
			if (date < min) {
				min = date;
				res = str;
			}
		}
	}

	cout << "--------------------------------------" << endl;
	cout << "Дата с наименьшим годом  = " << res << endl;
	fin.close(); 

	/*string date = "02.04.2005";
	int i = date.size();
	cout << date.substr(i - 4);
	int datei = stoi(date.substr(i - 4));*/

	return 0;	
}