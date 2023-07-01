#include <iostream>
#include <algorithm>

using namespace std;

int minProductSum(int* nums1, int* nums2, int size) {
    sort(nums1, nums1 + size);
    int ProductSum = 0;
    for (int i = 0; i < size; ++i) {
        ProductSum += nums1[i] * nums2[size - i - 1];
    }
    return ProductSum;
}

int main() {
    int n;
    cout << "Enter the length of the arrays: ";
    cin >> n;
    int nums1[n];
    cout << "Enter the elements of nums1: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums1[i];
    }
    int nums2[n];
    cout << "Enter the elements of nums2: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums2[i];
    }
    int minimumProductSum = minProductSum(nums1, nums2, n);
    cout << "Minimum Product Sum: " << minimumProductSum << endl;
    return 0;
}
