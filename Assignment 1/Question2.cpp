#include<iostream>

using namespace std;

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
    int k = 0;
    for (int i = 0; i < n; ++i) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    cout << "Updated array: ";
    for (int i = 0; i < n; ++i) {
        if(i<k){
        	cout << nums[i] << " ";
		}
		else{
			cout<<"_ ";
		}
    }
    cout << "\nCount: " << k << endl;
    return 0;
}
