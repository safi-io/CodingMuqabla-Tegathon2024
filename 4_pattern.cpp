#include<iostream>
using namespace std;
int main() {
    int n; cout << "Enter a no. :: "; cin >> n;

    int nst = 1, nsp = n-1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=nsp; j++) {
            cout << " ";
        }
        for(int j=1; j<=nst; j++) {
            cout << "*";
        }
        cout << endl;
        nst+=2;
        nsp--;
    }

    return 0;
}