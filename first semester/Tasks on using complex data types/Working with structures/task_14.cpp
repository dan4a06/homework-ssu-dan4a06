    #include <iostream>
    #include <sstream>
    #include <string>
    #include <cctype>
    #include <limits.h>

    using namespace std;
    /*� ���������� �������� ���������� ����� ��������� � ���������� ������
    ����� �� ��������� �� ����� ���������. ����� ������������ ����������
    ����� ����� ���������, ������� ����������� �� ����� ������. ���
    ������� ������ ������� � ������������ ��������� Point � �������������
    ������ � ���������� �����. */

    struct point {
        double x, y;
    };

    point* create(int& n) {
        cout << "n = ";
        cin >> n;
        point* a = new point[n];
        for (int i = 0; i < n; i++) {
            cout << "Input " << i+1 << " point coordinates (x, y) separated by space:  \n";
            cin >> a[i].x >> a[i].y;
        }
        return a;
    }

    bool Proverka(point a, point b, point c) {
        if (((c.x - a.x) / (b.x - a.x)) == ((c.y - a.y) / (b.y - a.y))) return true;
        else return false;
    }

    void kol(point* a, int n) {
        int max = INT_MIN;
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n - 2; j++) {
                int kol = 2;
                cout << "--------" << endl;
                cout << "����� �� ����� ������ - (" << a[i].x << "," << a[i].y << ") (" << a[j].x << "," << a[j].y << ")";
                for (int k = j + 1; k < n; k++)
                    if (Proverka(a[i], a[j], a[k])) {
                        kol++;
                        cout << " (" << a[k].x << "," << a[k].y << ")";
                    }
                cout << endl << "���-��: " << kol << endl;
                if (kol > max) max = kol;
            }
        cout << "--------" << endl<< "����������� ���-�� ����� ������� �� ����� ������ - " << max;
    }

    int main() {
        setlocale(LC_ALL, "RU");
        int n;
        point* a = create(n);
        kol(a, n);

        return 0;
    }
