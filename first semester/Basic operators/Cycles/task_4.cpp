#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU"); 

	int N;
	cout << "¬ведите число: ";
	cin >> N;
	float sqrtN1 = sqrt(N);
	
	while (N % 2 == 0) {
		N = N / 2;
		cout << "2 X ";
	}
	while (N % 3 == 0) {
		N = N / 3;
		cout << "3 X ";
	}
	while (N % 5 == 0) {
		N = N / 5;
		cout << "5 X ";
	}
	while (N % 7 == 0) {
		N = N / 7;
		cout << "7 X ";
	}
	while (N % 11 == 0) {
		N = N / 11;
		cout << "11 X ";
	}
	while (N % 13 == 0) {
		N = N / 13;
		cout << "13 X ";
	}
	while (N % 17 == 0) {
		N = N / 17;
		cout << "17 X ";
	}
	while (N % 19 == 0) {
		N = N / 19;
		cout << "19 X ";
	}

	int sqrtN = sqrt(N);
	if (sqrtN1 - sqrtN == 0) {
		cout << sqrt(N) << " X ";
		N = sqrtN;
	}
	cout << N;

	return 0;
}
