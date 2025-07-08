    #include <iostream>
    #include <sstream>
    #include <cmath>
    #include <limits.h>

    using namespace std;
    /*� C������ �������, ������� ���������� ���������� ��������� �����. � �������
������ ������� ���������� ���������� �����, ������� ������� �� ���������,
��� � X.. */
    int Delit(int a) {
        int kol = 2;
        for (int i = 2; i <= int(sqrt(a)); i++) {
            if (a % i == 0) kol++;
        };
        return kol;
    }

    void Delitka(int a) {
        int kol = 2;
        for (int i = 2; i <= int(sqrt(a)); i++) {
            if (a % i == 0) {
                kol++; cout << i << " ";
            };
        };
    }

    int main() {
        setlocale(LC_ALL, "RU");
        int a;
        cout << "������� �����: "; cin >> a;
        int kol_a = Delit(a);
        cout << "���������� ��������� ����� " << a << " - " << kol_a << endl;;
        Delitka(a);
        for (int i = 1; i < a; i++) {
            if (Delit(a - i) == kol_a) {
                cout << "���������� ����� ������� ������� �� ��������� - " << a - i << endl;
                Delitka(a - i);
                break;
            };

        };
        return 0;
    }
