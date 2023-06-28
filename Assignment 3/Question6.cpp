#include <iostream>

using namespace std;

int singleNumber(int nums[], int n) {
    int result = 0;

    for (int i = 0; i < n; ++i) {
        result ^= nums[i]; 
    }

    return result;
}

int main() {
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int nums[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int single = singleNumber(nums, n);

    cout << "Single element: " << single << endl;

    return 0;
}
