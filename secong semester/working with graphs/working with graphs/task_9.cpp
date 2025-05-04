#include <iostream>
#include <vector>

using namespace std;

int main() {
    int vertex, edge;
    cout << "Введите количесвто вершин: "; cin >> vertex;
    cout << "Введите количесвто рёбер: "; cin >> edge;


    vector<vector<int>> adj(vertex + 1); // Список смежности (исходящие рёбра)
    vector<int> in_degree(vertex + 1, 0); // Полустепень захода (количество входящих рёбер)

    cout << "Введите рёбра (пары вершин u -> v):" << endl;
    for (int i = 0; i < edge; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); // Добавляем исходящее ребро
        in_degree[v]++;      // Увеличиваем полустепень захода для v
    }

    cout << "Вершина | Исходящая степень | Входящая степень | Общая степень" << endl;
    for (int i = 1; i <= vertex; ++i) {
        int out_degree = adj[i].size();
        int total_degree = out_degree + in_degree[i];
        cout << i << "       | " << out_degree << "                 | " << in_degree[i] << "                | " << total_degree << endl;
    }

    return 0;
}