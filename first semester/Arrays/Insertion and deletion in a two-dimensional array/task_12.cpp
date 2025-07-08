#include <iostream> 
#include <limits.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    int n, m;
    cout << "n="; cin >> n;
    cout << "m="; cin >> m; 
    int** mas = new int* [n];
    for (int i = 0; i < n; i++)
        mas[i] = new int[m];
    cout << "Введите элементы массива:\n";
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> mas[i][j];
            if (max < mas[i][j]) max = mas[i][j];
        }
    bool f;
    for (int j = 0; j < m; )
    {
        f = false;
        for (int i = 0; i < n; i++)
            if (mas[i][j] == max) {
                f = true;
                break;
            }
        if (f)//если нулевой элемент встречается в строке 
            //то будем строку удалять 
        {
            //сдвиг строк на одну позицию вверх 
            for (int k = j; k < m - 1; k++)
                for (int i = 0; i < n; i++)
                    mas[i][k] = mas[i][k + 1];
            m--; //уменьшаем количество строк в массиве на 1 
        }
        //если строку не удаляли, то переходим к следующей строке 
        else j++;
    }
    cout << "выведем new массив\n";
    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < m; j++)
            cout << mas[i][j] << "\t";
    system("pause");
    delete[]mas;

    return 0;
}