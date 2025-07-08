#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 55 15 20 25 55 35 40 45 50 55

//��� ������� setlocale ���������� setlocale
void setlocale() {
	setlocale(LC_ALL, "RU");
}

//������� �������� �� ��������
bool odd(int x) {
	return x % 2 == 0;
}

int main() {
	setlocale(LC_ALL, "RU");
	vector<int> vec;
	int n; cout << "���-�� ��������� - "; cin >> n;
	int summa = 0; int X;

	//���������� ������������������ � � �����
	for (int i = 0; i < n; i++) {
		int x;
		cout << "a[" << i << "] = ";
		cin >> x;
		vec.push_back(x);
	}
	cout << endl << "==============================================================" << endl;

	cout << endl << "����������� ������������������" << endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) cout << *it << "\t"; cout << endl;
	
	//�������� ���� ������ ��������� � �����
	vector<int>::iterator it = remove_if(vec.begin(), vec.end(), odd);
	vec.erase(it, vec.end());

	cout << endl << "�������� ���� ������ ���������" << endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) cout << *it << "\t"; cout << endl;

	//������ ���� ������������ ��������� �� �����������(����������� �� ������������ ������ �� ����!!) � �����
	int Max = *max_element(vec.begin(), vec.end());
	int Min = *min_element(vec.begin(), vec.end());
	replace(vec.begin(), vec.end(), Max, Min);

	cout << endl << "������ ���� ������������ ��������� �� �����������" << endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) cout << *it << "\t"; cout << endl;
	
	//����������� ����� X � ����� ����� ��������� ������������������ ������� X
	cout << endl << "������� ����� X - "; cin >> X;

	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
		if (*it % X == 0) {
			summa += *it;
		}
	}
	
	cout << endl << "����� ��������� ������������������ ������� ����� X  - " << summa;

	return 0;
}