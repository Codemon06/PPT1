#include <iostream>
#include <algorithm>

using namespace std;

int arrayPairSum(int nums[], int size) {
    sort(nums, nums + size); 

    int maxSum = 0;
    for (int i = 0; i < size; i += 2) {
        maxSum += nums[i]; 
    }

    return maxSum;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int nums[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }

    int maxSum = arrayPairSum(nums, n);
    cout << "Output: " << maxSum << endl;

    return 0;
}
