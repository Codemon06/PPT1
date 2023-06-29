#include <iostream>

using namespace std;

void transposeMatrix(int matrix[][3], int rows, int columns) {
    int transposed[columns][rows];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    cout << "Transposed matrix:" << endl;
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int columns = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    transposeMatrix(matrix, rows, columns);

    return 0;
}
