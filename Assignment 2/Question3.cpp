#include<iostream>
#include<unordered_map>

using namespace std;

int findLHS(int arr[], int n) {
    unordered_map<int, int> mp;
    int maxLength = 0;
    for(int i=0; i<n; i++) {
        mp[arr[i]]++;
    }
    for(auto it=mp.begin(); it!=mp.end(); it++) {
        if(mp.find(it->first+1) != mp.end()) {
            maxLength = max(maxLength, it->second + mp[it->first+1]);
        }
    }
    return maxLength;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout<<"The length of longest harmonious subsequence is: "<<findLHS(arr, n)<<endl;
    return 0;
}