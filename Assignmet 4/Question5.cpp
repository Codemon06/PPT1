#include <iostream>
#include <cmath>

using namespace std;

int arrangeCoins(int n) {
    int count = 0;
    int i = 1;
    
    while (n >= i) {
        n -= i;
        i++;
        count++;
    }
    
    return count;
}

int main() {
    int n;
    cout<<"Enter number of coins: ";
    cin>>n;
    int completeRows = arrangeCoins(n);

    cout << "Number of complete rows: " << completeRows << endl;

    return 0;
}
