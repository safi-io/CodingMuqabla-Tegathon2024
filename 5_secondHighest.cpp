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

    int max = -1, max2 = -1;

    for(int i=0; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    for(int i=0; i<n; i++) {
        if((arr[i] > max2) and (arr[i] != max)) {
            max2 = arr[i];
        }
    }

    cout << max2 << " is the second highest...";


    return 0;
}