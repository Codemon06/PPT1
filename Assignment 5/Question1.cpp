#include <iostream>

using namespace std;

void convertTo2D(int arr[], int rows, int columns) {
    int index = 0;

    int matrix[rows][columns];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            matrix[i][j] = arr[index];
            index++;
        }
    }

    cout << "Converted 2D array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, columns;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    int totalElements = rows * columns;
    int arr[totalElements];

    cout << "Enter " << totalElements << " elements for the 1D array:\n";
    for (int i = 0; i < totalElements; ++i) {
        cin >> arr[i];
    }

    convertTo2D(arr, rows, columns);

    return 0;
}
