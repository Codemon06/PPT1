#include <iostream>

using namespace std;

int main(){
    int n, target, flag = 0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the target: ";
    cin>>target;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target){
                cout<<"["<<i<<","<<j<<"]";
                flag++;
            }
        }
    }
    if(flag == 0){
    	cout<<"\nNo Pair Found!!";
	}
    return 0;
}
