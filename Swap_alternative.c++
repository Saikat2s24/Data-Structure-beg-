#include<iostream>
using namespace std;
void swap_alternative(int arr[], int n){
    for (int i = 0; i < n; i+=2)
    {
        if ((i+1)<n)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    cout<<"After swapping the array is :";
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    
}
int main(){
    int arr[100000],n;
    cout<<"Enetr the number of elements :";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    swap_alternative(arr,n);
    
}
