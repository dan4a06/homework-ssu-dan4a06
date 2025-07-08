#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU"); 

	const int N = 4;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) 
			cout << i << " ";
		cout << endl;
		for (int j = 1; j <= i; j++) 
			cout << 11 - (i*2) << " ";
		cout << endl;
	}

	return 0;
}
