#include<iostream>

using namespace std;

int findMaxLength(int* nums, int size) {
    int maxLength = 0;
    int count = 0;
    const int mapSize = 2 * size + 1;
    int map[mapSize];
    for (int i = 0; i < mapSize; ++i){
        map[i] = -2;
    }
    map[size] = -1;

    for (int i = 0; i < size; ++i) {
        if (nums[i] == 1) {
            count += 1;
        } else {
           count -= 1;
        }
        if (map[count + size] != -2) {
            maxLength = max(maxLength, i - map[count + size]);
        } else {
            map[count + size] = i;
        }
    }

    return maxLength;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int maxLength = findMaxLength(arr, n);
    cout << "Maximum Length: " << maxLength << endl;
    return 0;
}