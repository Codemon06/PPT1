#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int minscore(vector<int>& nums, int n, int k){
    int minNum = nums[0], maxNum = nums[0];
    for (int i = 1; i < n; i++) {
        minNum = min(minNum, nums[i]);
        maxNum = max(maxNum, nums[i]);
    }
    if (minNum + k >= maxNum - k) {
        return 0;
    } 
    else {
        return maxNum - k - (minNum + k);
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin>>nums[i];
    }
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    int result = minscore(nums, n, k);
    cout<<result<<endl;
    return 0;
}