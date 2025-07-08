    #include <iostream>
    #include <sstream>
    #include <cmath>
    #include <limits.h>

    using namespace std;
    /*С Cоздать функцию, которая определяет количество делителей числа. С помощью
данной функции определить предыдущее число, имеющее столько же делителей,
что и X.. */
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
        cout << "Введите число: "; cin >> a;
        int kol_a = Delit(a);
        cout << "Количество делителей числа " << a << " - " << kol_a << endl;;
        Delitka(a);
        for (int i = 1; i < a; i++) {
            if (Delit(a - i) == kol_a) {
                cout << "Предыдущее число имеющее столько же делителей - " << a - i << endl;
                Delitka(a - i);
                break;
            };

        };
        return 0;
    }
