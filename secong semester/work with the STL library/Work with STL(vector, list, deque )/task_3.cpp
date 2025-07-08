#include <iostream>
#include <vector>

using namespace std;

void setlocale() {
	setlocale(LC_ALL, "RU");
}

int main() {
	setlocale(LC_ALL, "RU");
	vector<int> vec;
	int n; cout << "Кол-во элементов - "; cin >> n;


	for (int i = 0; i < n; i++) {
		int x;
		cout << "a[" << i << "] = ";
		cin >> x;
		vec.push_back(x);
	}
	cout << endl << "Последовательность до изменений" << endl;
	
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) cout << *it << "\t";
	cout << endl << "<<=================================================>>"1;
	cout << endl << "Последовательность после изменений" << endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
		if (*it % 2 != 0) {
			*it = 0;
		}
	}
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) cout << *it << "\t";

	return 0;
}