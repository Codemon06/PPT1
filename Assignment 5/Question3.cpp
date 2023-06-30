#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cout<<"Enter length of array: ";
    cin>>n;
    int arr[n], squarearr[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        squarearr[i] = arr[i]*arr[i];
    }
    sort(squarearr, squarearr+n);
    cout<<"Result: ";
    for(int i=0; i<n; i++){
        cout<<squarearr[i]<<" ";
    }
    return 0;
}