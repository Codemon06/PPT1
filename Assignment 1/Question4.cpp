#include<iostream>

using namespace std;

int plusOne(int digits[], int n){
    int carry = 1;
    for(int i=n-1; i>=0; i--){
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;
    }
    if(carry == 1){
        cout<<"1 ";
    }
    for(int i=0; i<n; i++){
        cout<<digits[i]<<" ";
    }
    return 0;
};
int main(){
    int n;
    cout<<"Enter the number of digits: ";
    cin>>n;
    int digits[n];
    cout<<"Enter the digits (from most significant to least significant): ";
    for(int i=0; i<n; i++){
        cin>>digits[i];
    }
    int result  = plusOne(digits, n);
    return 0;
}
