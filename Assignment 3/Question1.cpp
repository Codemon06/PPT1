#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int threeSumClosest(int nums[], int n, int target) {
    int closestSum = INT_MAX;
    int minDiff = INT_MAX;

    sort(nums, nums + n);

    for (int i = 0; i < n - 2; ++i) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            int diff = abs(target - sum);

            if (diff < minDiff) {
                minDiff = diff;
                closestSum = sum;
            }

            if (sum < target) {
                ++left;
            } else {
                --right;
            }
        }
    }

    return closestSum;
}

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int nums[n];
    cout<<"Enter elements of array: ";
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    int target;
    cout<<"Enter the target value: ";
    cin>>target;

    int result = threeSumClosest(nums, n, target);
    cout << "Closest sum to the target: " << result << std::endl;

    return 0;
}
