#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "How many numbers you want in array :: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    
    bool flag = false;

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                flag = true;
                break;
            }
        }
    }

    (flag) ? cout << "Not Distinct Array..." : cout << "Distinct Array...";

    return 0;
}