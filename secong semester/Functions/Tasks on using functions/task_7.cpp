    #include <iostream>
    #include <sstream>
    #include <cmath>
    #include <limits.h>

    using namespace std;
    /*�  ������� �������, ������� ���������� ����� ���� �����. ��������� ������
�������, ������� ��� ����������� �����, ����� ���� ������� ����� M. */

    int SumOfDigits(int a) {
        int summa{0};
        while (a != 0) {
            summa += a % 10;
            a /= 10;
        };
        return summa;
    }


    int main() {
        setlocale(LC_ALL, "RU");
        int m;
        cout << "������� ����� M : "; cin >> m;
        cout << "��� ���������� ����� ����� ���� ������� ����� ����� M " << endl;
        if (m > 27) cout << "� ����� ����� ����";
        else {
            for (int i = 100; i < 1000; i++) {
                if (SumOfDigits(i) == m)
                    cout << i << endl;
            };
        };
        return 0;
    }
