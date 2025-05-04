#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct People{
    string name;
    string pos;
    string d, m, y;
    string exp;
    string sal;
};

void insertionSort(vector<People>& arr) 
{
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        People key = arr[i];
        int j = i - 1;

        while (j >= 0 && (arr[j].name > key.name ||
            (arr[j].name == key.name && arr[j].exp > key.exp) ||
            (arr[j].name == key.name && arr[j].exp == key.exp && arr[j].y > key.y))) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main() {

    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    vector<People> employees;
    string line;

    while (getline(inputFile, line)) {
        People emp;

        stringstream ss(line);

        getline(ss, emp.name, ',');

        getline(ss, emp.pos, ',');

        getline(ss, emp.d, '.');
        getline(ss, emp.m, '.');
        getline(ss, emp.y, '.');

        getline(ss, emp.exp, ',');

        getline(ss, emp.sal, '.');

        employees.push_back(emp);
    }

    insertionSort(employees);

    outputFile << left << setw(15) << "surname" << setw(15) << "post" << setw(12) << "d.o.b" << setw(10) << "exp" << setw(10) << "sal" << endl;
    outputFile << string(62, '-') << endl;

    for (const auto& p : employees) {
        outputFile << left << setw(15) << p.name << setw(15) << p.pos << setw(2) << setfill('0') << p.d << "." << setw(2) << p.m << "." << setw(4) << p.y << setfill(' ')
         << "   " << setw(10) << p.exp << setw(10) << p.sal << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}