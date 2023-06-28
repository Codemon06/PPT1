#include <iostream>
#include <algorithm>

using namespace std;

void nextPermutation(int nums[], int n) {
    int i = n - 2;
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        --i;
    }
    if (i >= 0) {
        
        int j = n - 1;
        while (j > i && nums[j] <= nums[i]) {
            --j;
        }
       swap(nums[i], nums[j]);
    }    
    reverse(nums + i + 1, nums + n);
}

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int nums[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
       cout << nums[i] << " ";
    }
    cout <<endl;
    nextPermutation(nums, n);
    cout << "Next permutation: ";
    for (int i = 0; i < n; ++i) {
       cout << nums[i] << " ";
    }
    cout <<endl;

    return 0;
}
