#include <iostream>

using namespace std;

bool validMountainArray(int* arr, int size) {
    if (size < 3)
        return false;

    int i = 0;
    while (i < size - 1 && arr[i] < arr[i + 1])
        i++;
    if (i == 0 || i == size - 1)
        return false;
    while (i < size - 1 && arr[i] > arr[i + 1])
        i++;

    return i == size - 1;
}

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    bool result = validMountainArray(arr, n);
    cout << "Result: " << boolalpha << result << endl;
    return 0;
}
