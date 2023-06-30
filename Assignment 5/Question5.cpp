#include <iostream>
#include <cmath>

using namespace std;

int distanceValue(int arr1[], int size1, int arr2[], int size2, int d) {
    int distance = 0;

    for (int i = 0; i < size1; ++i) {
        bool found = false;
        for (int j = 0; j < size2; ++j) {
            if (abs(arr1[i] - arr2[j]) <= d) {
                found = true;
                break;
            }
        }
        if (!found) {
            distance++;
        }
    }

    return distance;
}

int main() {
    int size1, size2, d;
    cout << "Enter the size of array 1: ";
    cin >> size1;
    int arr1[size1];
    cout << "Enter the elements of array 1: ";
    for (int i = 0; i < size1; ++i) {
        cin >> arr1[i];
    }
    cout << "Enter the size of array 2: ";
    cin >> size2;
    int arr2[size2];
    cout << "Enter the elements of array 2: ";
    for (int i = 0; i < size2; ++i) {
        cin >> arr2[i];
    }
    cout << "Enter the value of d: ";
    cin >> d;
    int result = distanceValue(arr1, size1, arr2, size2, d);
    cout << "Distance value: " << result << endl;
    return 0;
}
