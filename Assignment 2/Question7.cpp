#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;
    int nums[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }
    bool increasing = true;
    bool decreasing = true;
    for(int i=0; i<n-1; i++){
        if(nums[i] > nums[i+1]){
            increasing = false;
        }
        if(nums[i] < nums[i+1]){
            decreasing = false;
        }
    }
    if(increasing || decreasing){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}