#include <iostream>

using namespace std;

void generateMatrix(int n, int matrix[][100]) {
    int topRow = 0;
    int bottomRow = n - 1;
    int leftCol = 0;
    int rightCol = n - 1;
    int num = 1;

    while (topRow <= bottomRow && leftCol <= rightCol) {
        for (int col = leftCol; col <= rightCol; ++col) {
            matrix[topRow][col] = num++;
        }
        topRow++;
        for (int row = topRow; row <= bottomRow; ++row) {
            matrix[row][rightCol] = num++;
        }
        rightCol--;
        if (topRow <= bottomRow) {
            for (int col = rightCol; col >= leftCol; --col) {
                matrix[bottomRow][col] = num++;
            }
            bottomRow--;
        }
        if (leftCol <= rightCol) {
            for (int row = bottomRow; row >= topRow; --row) {
                matrix[row][leftCol] = num++;
            }
            leftCol++;
        }
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int matrix[100][100];
    generateMatrix(n, matrix);
    cout << "Generated Matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
