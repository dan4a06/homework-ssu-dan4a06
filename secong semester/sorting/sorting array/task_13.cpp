#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

void Sort(vector<int> &arr)
{
    int leftMark = 1;
    int rightMark = arr.size() - 1;
    while (leftMark <= rightMark)
    {
        for (int i = rightMark; i >= leftMark; --i)
            if (arr[i - 1] < arr[i])
                swap(arr[i], arr[i-1]);
        ++leftMark;

        for (int i = leftMark; i <= rightMark; ++i)
            if (arr[i - 1] < arr[i])
                swap(arr[i], arr[i-1]);
        --rightMark;
    }
}


int main() {
    int n, x;
    in >> n;
    vector<vector<int>> matrix(n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j<n; j++){
            in >> x;
            matrix[i].push_back(x);
        }
    }

    vector<int> b;

    //диагонали параллельные побочной и выше главной
    for (int k = 1; k<n; k++)
    {
        int i, j;
        for ( j = 0, i=k; i >=0 ; j++, i--)
        {
            b.push_back(matrix[i][j]);
        }
        Sort(b);
        for (j = 0, i = k; i >= 0; j++, i--)
        {
            matrix[i][j] = b[j];
        }
        b.clear();
    }

    // Диагонали параллельные побочной и ниже главной
    for (int k = 1; k < n; k++)
    {
        int i, j, p;
        for (j = k, i = n-1; j < n; j++, i--)
        {
            b.push_back(matrix[i][j]);
        }
            Sort(b);
        for (j = k, i = n - 1, p = 0; j < n; j++, i--, p++)
        {
            matrix[i][j] = b[p];
        }
        b.clear();
    }

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++)
        out << matrix[i][j] << "\t";
        out << endl;
        }

    in.close();
    out.close();
    return 0;
}