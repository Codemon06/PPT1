#include<iostream>

using namespace std;

bool flowerbed(int arr[], int n, int m){
    int count = 0;
    int i = 0;
    while (i < n) {
        if (arr[i] == 0 && (i == 0 || arr[i - 1] == 0) &&
            (i == n - 1 || arr[i + 1] == 0)) {
            arr[i] = 1;
            count++;
        }
        if (count >= m)
            return true;
        i++;
    }

    return false;
}

int main(){
    int n;
    cout<<"Enter the length of flowerbed: ";
    cin >> n;
    int arr[n];
    cout<<"Enter the sequence of the flowerbed: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int m;
    cout<<"Enter the number of flowers to be planted: ";
    cin >> m;
    if(flowerbed(arr, n, m)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}