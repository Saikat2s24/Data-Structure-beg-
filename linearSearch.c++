#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,20,30,5,60,88};
    int key, found = 0, index = -1;
    cout<<"Enter the number you want :";
    cin>>key;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            index = i;
            break;
        }
    }
    if (found == 1) {
        cout << "Found " << key << " at index " << index << "\n";
    }
    else {
        cout<<"This element is not in this array.";
    }
    return 0;
}
    
    
    
    
