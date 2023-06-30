#include <iostream>
#include <unordered_set>

using namespace std;

void findMissingElements(int nums1[], int nums2[], int size1, int size2) {
    unordered_set<int> set1(nums1, nums1 + size1);
    unordered_set<int> set2(nums2, nums2 + size2);

    int answer[size1][size2];
    int missing1Index = 0;
    int missing2Index = 0;

    for (int i = 0; i < size1; i++) {
        if (set2.find(nums1[i]) == set2.end()) {
            answer[0][missing1Index] = nums1[i];
            missing1Index++;
        }
    }

    for (int i = 0; i < size2; i++) {
        if (set1.find(nums2[i]) == set1.end()) {
            answer[1][missing2Index] = nums2[i];
            missing2Index++;
        }
    }
    for(int i = 0; i < 2; i++) {
        cout << " [";
        for(int j=0; j<missing1Index; j++){
            cout<<" "<<answer[i][j]<<" ";
        }
        cout<<"], ";
    }
}

int main() {
    int size1 ,size2;
    cout<<"Enter sizes of arrays: ";
    cin>>size1>>size2;
    int nums1[size1], nums2[size2];
    cout<<"Enter elements of array1: ";
    for(int i=0; i<size1; i++){
        cin>>nums1[i];
    }
    cout<<"Enter elements of array2: ";
    for(int i=0; i<size2; i++){
        cin>>nums2[i];
    }
    cout << "[";
    findMissingElements(nums1, nums2, size1, size2);
    cout << "]";

    return 0;
}