#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m; // n - количество вершин, m - количество рёбер
    cout << "Введите количество вершин и рёбер: ";
    cin >> n >> m;

    vector<vector<int>> adj(n + 1); // Список смежности (индексация с 1)

    cout << "Введите рёбра (пары вершин u -> v):" << endl;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); // Добавляем ребро u → v
    }

    int a, b;
    cout << "Введите вершины a и b для добавления ребра (a -> b): ";
    cin >> a >> b;

    // Проверка, что вершины a и b существуют
    if (a < 1 || a > n || b < 1 || b > n) {
        cout << "Ошибка: одна из вершин не существует!" << endl;
        return 1;
    }

    // Добавляем ребро a → b
    adj[a].push_back(b);
    m++; // Увеличиваем количество рёбер

    // Выводим обновлённый список смежности
    cout << "\nОбновлённый список смежности:" << endl;
    for (int i = 1; i <= n; ++i) {
        cout << i << " -> ";
        for (int v : adj[i]) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}