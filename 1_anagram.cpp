#include<iostream>
using namespace std;
int main() {
    
    string s = "rat", t = "tar";
    bool flag = true;
    int size = s.length();

    for(int i=0; i<size; i++) {
        int counter = 0;
        for(int j=0; j<size; j++) {
            if(s[i] != t[j]) {
                counter++;
            }
            if(counter == size) {
                flag = false;
                break;
            }
        }
    }

    cout << flag;





    return 0;
}