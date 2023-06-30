#include <iostream>
#include <algorithm>

using namespace std;

bool isDoubledArray(int changed[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        if (changed[i] * 2 != changed[i + size / 2]) {
            return false;
        }
    }
    return true;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int changed[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> changed[i];
    }
    if (!isDoubledArray(changed, size)) {
        cout << "[]" << endl;
        return 0;
    }
    int original[size / 2] = {0};
    for (int i = 0; i < size / 2; ++i) {
        original[i] = changed[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < size / 2; ++i) {
        cout << original[i] << " ";
    }
    cout << endl;
    return 0;
}