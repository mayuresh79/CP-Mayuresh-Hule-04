#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>>& mat, int u, int v) {
    mat[u][v] = 1;
    mat[v][u] = 1; 
}

void display(const vector<vector<int>>& mat) {
    int V = mat.size();
    cout << "\nAdjacency Matrix:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int V = 4;
    
    vector<vector<int>> mat(V, vector<int>(V, 0));

    addEdge(mat, 0, 1);
    addEdge(mat, 0, 2);
    addEdge(mat, 0, 3);
    addEdge(mat, 1, 2);

    display(mat);

    return 0;
}