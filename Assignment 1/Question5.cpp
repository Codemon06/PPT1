#include<iostream>

using namespace std;

int mergedarray(int arr1[],int arr2[], int n, int m){
    for(int i=m; i<m+n; i++){
        arr1[i] = arr2[i-m];
    }
    for(int i=0; i<m+n; i++){
        for(int j=i+1; j<m+n; j++){
            if(arr1[i]>arr1[j]){
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    for(int i=0; i<m+n; i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}
int main(){
    int n, m;
    cout<<"Enter the sizes of array 1 and 2: ";
    cin>>m>>n;
    int arr1[m+n], arr2[n];
    cout<<"Enter the elements of array1: ";
    for(int i=0; i<m; i++){
        cin>>arr1[i];
    }
    for(int i=m; i<m+n; i++){
        arr1[i] = 0;
    }
    cout<<"Enter the elements of array2: ";
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    mergedarray(arr1, arr2, n, m);
    return 0;
}
