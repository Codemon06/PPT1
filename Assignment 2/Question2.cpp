#include <iostream>
#include <algorithm>

using namespace std;

int distributeCandies(int candyType[], int size) {
    sort(candyType, candyType + size); 
    int maxTypes = 1;
    int maxAllowed = size / 2;
    for (int i = 1; i < size && maxTypes < maxAllowed; ++i) {
        if (candyType[i] != candyType[i - 1]) {
            maxTypes++;
        }
    }

    return maxTypes;
}

int main() {
    int n;
    cout << "Enter the number of the candies: ";
    cin >> n;
    int candyType[n];
    cout<<"Enter all the type of candy: ";
    for(int i=0; i<n; i++) {
        cin >> candyType[i];
    }
    int maxTypes = distributeCandies(candyType, n);

    cout << "Output: " << maxTypes << endl;

    return 0;
}
