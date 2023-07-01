#include <iostream>

using namespace std;

bool searchMatrix(int** matrix, int m, int n, int target) {
    int left = 0;
    int right = m * n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int row = mid / n;
        int col = mid % n;

        if (matrix[row][col] == target)
            return true;
        else if (matrix[row][col] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return false;
}

int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    int** matrix = new int*[m];
    for (int i = 0; i < m; ++i) {
        matrix[i] = new int[n];
    }
    cout << "Enter the matrix elements row by row:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int target;
    cout << "Enter the target number: ";
    cin >> target;

    bool result = searchMatrix(matrix, m, n, target);

    cout << "Result: " << boolalpha << result << endl;

    return 0;
}
