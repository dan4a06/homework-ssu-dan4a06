    #include <iostream>
    #include <sstream>
    #include <cmath>
    #include <limits.h>

    using namespace std;
    /*С  Создать функцию, которая определяет сумму цифр числа. Используя данную
функцию, вывести все трехзначные числа, сумма цифр которых равна M. */

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
        cout << "Введите число M : "; cin >> m;
        cout << "Все трёхзначные числа сумма цифр которых равна числу M " << endl;
        if (m > 27) cout << "А таких чисел нема";
        else {
            for (int i = 100; i < 1000; i++) {
                if (SumOfDigits(i) == m)
                    cout << i << endl;
            };
        };
        return 0;
    }
