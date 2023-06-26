#include<iostream>

using namespace std;

int searchtarget(int nums[], int n, int target){
    int left = 0;
    int right = n-1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;
    int nums[n];
    cout<<"Enter the elements of the array (sorted in ascending order): ";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }
    int target;
    cout<<"Enter the target element: ";
    cin >> target;
    int result = searchtarget(nums, n, target);
    cout<<result<<endl;
    return 0;
}
