#include<iostream>
using namespace std;

void setBit(int a, int b) {
    int count = 0;

    while(a != 0) {
        if(a & 1) {
            count++;
        }
        a = a >> 1;
    }

    while(b != 0) {
        if(b & 1) {
            count++;
        }
        b = b >> 1;
    }

    cout << "Total set bits are : " << count;
}

int main() {
    int a, b;

    cout << "Enter the value of a :" << endl;
    cin >> a;

    cout << "Enter the value of b :" << endl;
    cin >> b;

    setBit(a, b);
}