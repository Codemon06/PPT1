#include<iostream>

using namespace std;

const int MAX_SIZE = 100;

int main(){
    int a, b, m, n;
    cout<<"Enter dimension of matrix M: ";
    cin>>a>>b;
    int M[a][b];
    cout<<"Enter elements of M (row wise): ";
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>>M[i][j];
        }
    }
    cout<<"Enter dimension of matrix N: ";
    cin>>m>>n;
    int N[m][n];
    cout<<"Enter elements of N (row wise): ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>N[i][j];
        }
    }
    int result[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < n; ++j) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < b; ++k) {
                result[i][j] += M[i][k] * N[k][j];
            }
        }
    }
    cout << "Result of matrix multiplication:" << endl;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}