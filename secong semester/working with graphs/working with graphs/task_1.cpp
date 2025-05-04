#include <iostream>
#include <vector>

using namespace std;

int main() {
    int vertex, edge;
    cout << "Введите количесвто вершин: "; cin >> vertex;
    cout << "Введите количесвто рёбер: "; cin >> edge;


    vector<vector<int>> graph(vertex + 1); // Индексация с 1 (если вершины нумеруются с 1)

    cout << "Введите рёбра (пары вершин):" << endl;
    for (int i = 0; i < edge; ++i) {
        int u, v;
        cin >> u;
        cin >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); 
    }

    cout << "Введите вершину, для которой нужно найти количество смежных вершин: ";
    cin >> vertex;

    cout << "Количество смежных вершин: " << graph[vertex].size() << endl;

    return 0;
}