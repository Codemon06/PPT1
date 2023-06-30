#include <iostream>

using namespace std;

int findMin(int nums[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[right]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return nums[left];
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int nums[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> nums[i];
    }
    int minimum = findMin(nums, size);
    cout << "Minimum element: " << minimum <<   endl;
    return 0;
}
