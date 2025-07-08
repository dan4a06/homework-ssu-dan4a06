#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 55 15 20 25 55 35 40 45 50 55

//это функция setlocale вызывающая setlocale
void setlocale() {
	setlocale(LC_ALL, "RU");
}

//функция проверки на чётность
bool odd(int x) {
	return x % 2 == 0;
}

int main() {
	setlocale(LC_ALL, "RU");
	vector<int> vec;
	int n; cout << "Кол-во элементов - "; cin >> n;
	int summa = 0; int X;

	//Заполнение последовательности и её вывод
	for (int i = 0; i < n; i++) {
		int x;
		cout << "a[" << i << "] = ";
		cin >> x;
		vec.push_back(x);
	}
	cout << endl << "==============================================================" << endl;

	cout << endl << "Изначальная последовательность" << endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) cout << *it << "\t"; cout << endl;
	
	//Удаление всех чётных элементов и вывод
	vector<int>::iterator it = remove_if(vec.begin(), vec.end(), odd);
	vec.erase(it, vec.end());

	cout << endl << "Удаление всех чётных элементов" << endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) cout << *it << "\t"; cout << endl;

	//Замена всех максимальных элементов на минимальные(минимальные на максимальные менять не надо!!) и вывод
	int Max = *max_element(vec.begin(), vec.end());
	int Min = *min_element(vec.begin(), vec.end());
	replace(vec.begin(), vec.end(), Max, Min);

	cout << endl << "Замена всех максимальных элементов на минимальные" << endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) cout << *it << "\t"; cout << endl;
	
	//Определение числа X и вывод суммы элементов последовательности кратных X
	cout << endl << "Введите число X - "; cin >> X;

	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
		if (*it % X == 0) {
			summa += *it;
		}
	}
	
	cout << endl << "Сумма элементов последовательности кратных числу X  - " << summa;

	return 0;
}