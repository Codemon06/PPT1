#include <iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cout<<"Enter the length of array : ";
    cin >> n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n, greater<int>());
    cout<<"Maximum product is : "<<arr[0]*arr[1]*arr[2]<<endl;
    return 0;
}
