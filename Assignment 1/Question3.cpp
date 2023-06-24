#include<iostream>

using namespace std;

int searchindex(int nums[], int n, int val){
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == val) {
            return mid;
        } else if (nums[mid] < val) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}

int main(){
    int n, val;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int nums[n];
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    cout<<"Enter the val: ";
    cin>>val;
    int index = searchindex(nums, n, val);
    cout<<"Index is: "<<index<<"\n";
    return 0;
}
