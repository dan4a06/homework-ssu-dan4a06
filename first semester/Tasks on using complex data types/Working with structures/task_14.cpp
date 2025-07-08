    #include <iostream>
    #include <sstream>
    #include <string>
    #include <cctype>
    #include <limits.h>

    using namespace std;
    /*— клавиатуры вводитс€ количество точек множества и координаты каждой
    точки на плоскости из этого множества. Ќайти максимальное количество
    точек этого множества, которые расположены на одной пр€мой. ѕри
    решении задачи описать и использовать структуру Point с вещественными
    пол€ми Ц координаты точки. */

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
                cout << "“очки на одной пр€мой - (" << a[i].x << "," << a[i].y << ") (" << a[j].x << "," << a[j].y << ")";
                for (int k = j + 1; k < n; k++)
                    if (Proverka(a[i], a[j], a[k])) {
                        kol++;
                        cout << " (" << a[k].x << "," << a[k].y << ")";
                    }
                cout << endl << " ол-во: " << kol << endl;
                if (kol > max) max = kol;
            }
        cout << "--------" << endl<< "ћаксимальое кол-во точек лежащих на одной пр€мой - " << max;
    }

    int main() {
        setlocale(LC_ALL, "RU");
        int n;
        point* a = create(n);
        kol(a, n);

        return 0;
    }
