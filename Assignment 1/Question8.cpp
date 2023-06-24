#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int nums[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int count=1;
    for(int i=0; i<n; i++){
        if(nums[i]!=count){
            cout<<"["<<nums[i]<<","<<count<<"]";
        }
        count++;
    }
    return 0;
}