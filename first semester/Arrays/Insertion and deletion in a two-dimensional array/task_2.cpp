#include <iostream> 
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    int n, m;
    cout << "n=";
    cin >> n;//количество строк 
    cout << "m=";
    cin >> m;//количество столбцов 
    // выделяем память под массив 
    int** mas = new int* [n];
    for (int i = 0; i < n; i++)
        mas[i] = new int[2 * m];
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mas[i][j];

    //заводим массив одномерный для элементов новой строки 
    int* s = new int[n];
    cout << "Введите элементы нового столбца:\n";
    for (int i = 0; i < n; i++)
        cin >> s[i];

    bool f;
    for (int j = 0; j < m; j++)
    {
        f = true;
        for (int i = 0; i < n; i++)
            if (mas[i][j] % 2 == 0) {
                f = false;
                break;
            }
        if (f)//если в строке нет нечетных 
            //то будем вставлять новую строку 
        {
            //выделяем память под новую строку 
            mas[2*m] = new int[n];
            //сдвиг строк на одну позицию вниз 
            for (int k = m; k > j; k--)
                for (int i = 0; i < n; i++)
                    mas[i][k] = mas[i][k-1];
            //вставляем новую строку  на место i-ой 
            for (int i = 0; i < n; i++)
                mas[i][j] = s[i];
            m++; //увеличиваем количество строк в массиве на 1 
            j++;
        }
    }
    //выводим новый массив 
    cout << "Новый массив:\n";
    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < m; j++)
            cout << mas[i][j] << "\t";
    system("pause");
    delete[]mas;
    delete[]s;
    return 0;
}