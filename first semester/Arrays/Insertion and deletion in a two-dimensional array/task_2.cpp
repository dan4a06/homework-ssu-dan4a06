#include <iostream> 
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    int n, m;
    cout << "n=";
    cin >> n;//���������� ����� 
    cout << "m=";
    cin >> m;//���������� �������� 
    // �������� ������ ��� ������ 
    int** mas = new int* [n];
    for (int i = 0; i < n; i++)
        mas[i] = new int[2 * m];
    cout << "������� �������� �������:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mas[i][j];

    //������� ������ ���������� ��� ��������� ����� ������ 
    int* s = new int[n];
    cout << "������� �������� ������ �������:\n";
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
        if (f)//���� � ������ ��� �������� 
            //�� ����� ��������� ����� ������ 
        {
            //�������� ������ ��� ����� ������ 
            mas[2*m] = new int[n];
            //����� ����� �� ���� ������� ���� 
            for (int k = m; k > j; k--)
                for (int i = 0; i < n; i++)
                    mas[i][k] = mas[i][k-1];
            //��������� ����� ������  �� ����� i-�� 
            for (int i = 0; i < n; i++)
                mas[i][j] = s[i];
            m++; //����������� ���������� ����� � ������� �� 1 
            j++;
        }
    }
    //������� ����� ������ 
    cout << "����� ������:\n";
    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < m; j++)
            cout << mas[i][j] << "\t";
    system("pause");
    delete[]mas;
    delete[]s;
    return 0;
}