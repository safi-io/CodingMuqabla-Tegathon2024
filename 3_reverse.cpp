#include<iostream>
using namespace std;

int main() {
    char arr[] = {'h','e','l','l','o'};
    int size = sizeof(arr) / sizeof(arr[0]);

    int i=0 , j = size - 1;

    while(i<j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for(int i=0; i<size; i++) {
        cout << arr[i];
    }

    return 0;
}