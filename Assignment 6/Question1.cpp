#include<iostream>
#include<string.h>

using namespace std;

void reconstructPermutation(const char* s, int n, int* perm) {
    int low = 0, high = n;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'I')
            perm[i] = low++;
        else
            perm[i] = high--;
    }
    perm[n] = low; 
}

int main() {
    string s;
    cout<<"Enter string: ";
    cin>>s;
    int n = s.length();
    int perm[n + 1];

    reconstructPermutation(s.c_str(), n, perm);

    cout << "Reconstructed permutation: ";
    for (int i = 0; i <= n; ++i) {
        cout << perm[i] << " ";
    }
    cout << endl;

    return 0;
}
