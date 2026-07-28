#include<iostream>
using namespace std;
int sumOfElements(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout<<"The sum of elements in this array is :"<<sum;
    
}
int main() {
    int size;
    int arr[100000] ;
    cout<<"Enter the size of the array :";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    sumOfElements(arr,5);
}