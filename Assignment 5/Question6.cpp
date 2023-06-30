#include <iostream>
#include <cmath>

using namespace std;

void findDuplicates(int nums[], int size) {
    int duplicates[size] = {0};
    for (int i = 0; i < size; ++i) {
        int index = abs(nums[i]) - 1;
        if (nums[index] < 0) {
            duplicates[index] = abs(nums[i]);
        } else {
            nums[index] = -nums[index];
        }
    }
    cout << "Integers that appear twice: [";
    for (int i = 0; i < size; ++i) {
        if (duplicates[i] != 0) {
            cout << duplicates[i] << " ";
        }
    }
    cout <<"]"<< endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int nums[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> nums[i];
    }
    findDuplicates(nums, size);
    return 0;
}
