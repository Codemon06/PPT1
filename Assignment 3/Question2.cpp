#include <iostream>
#include <algorithm>

using namespace std;

void fourSum(int nums[], int n, int target) {
    if (n < 4) {
        return; 
    }

    sort(nums, nums + n);

    for (int i = 0; i < n - 3; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        for (int j = i + 1; j < n - 2; ++j) {
            if (j > i + 1 && nums[j] == nums[j - 1]) {
                continue;
            }

            int left = j + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[j] + nums[left] + nums[right];

                if (sum == target) {
                    cout << "[" << nums[i] << ", " << nums[j] << ", " << nums[left] << ", " << nums[right] << "]" << endl;

                   
                    while (left < right && nums[left] == nums[left + 1]) {
                        ++left;
                    }

                   
                    while (left < right && nums[right] == nums[right - 1]) {
                        --right;
                    }

                    ++left;
                    --right;
                }
                else if (sum < target) {
                    ++left;
                }
                else {
                    --right;
                }
            }
        }
    }
}

int main() {
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int nums[n];
    cout<<"Enter the element of array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }    
    int target;
    cout<<"Enter the target value: ";
    cin>>target;
    cout << "Unique quadruplets that sum to the target:" << endl;
    fourSum(nums, n, target);
    return 0;
}
