#include <iostream>

using namespace std;

int maxCount(int m, int n, int ops[][2], int length) {
    int minX = m, minY = n;

    for (int i = 0; i < length; i++) {
        minX = min(minX, ops[i][0]);
        minY = min(minY, ops[i][1]);
    }

    return minX * minY;
}

int main() {
    int m = 3, n = 3;
    int a;
    cout<<"Enter the number of operations: ";
    cin>>a;
    int ops[a][2];
    cout<<"Enter the operations: ";
    for(int i=0; i<a; i++){
        for(int j=0; j<2; j++){
            cin>>ops[i][j];
        }
    }
    int maxIntegers = maxCount(m, n, ops, a);

    cout << "Number of maximum integers: " << maxIntegers << endl;

    return 0;
}
