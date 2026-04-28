#include <bits/stdc++.h>
using namespace std;



void matrix_snake_pattern(vector<vector<int>> &matrix){
    int rows = 3;
    int cols = 3;

    cout << "Matrix in snake pattern: ";
    for(int i = 0; i < rows; i++){
        if(i % 2 == 0){
            for(int j = 0; j < cols; j++){
                cout << matrix[i][j] << " ";
            }
        } else {
            for(int j = cols - 1; j >= 0; j--){
                cout << matrix[i][j] << " ";
            }
        }
    }
    cout << endl;
}
int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    matrix_snake_pattern(matrix);
    return 0;   
}