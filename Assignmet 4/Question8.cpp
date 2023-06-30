#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter length of array: ";
    cin>>n;
    int arr[n], temp[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n/2; i++){
        temp[2 * i] = arr[i];
        temp[2 * i + 1] = arr[(n/2) + i];
    }
    for(int i=0; i<n; i++){
        arr[i] = temp[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
