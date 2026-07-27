#include<iostream>
using namespace std;
int main(){
    int n,m,no ;
    cout<<"Enter the total amount : ";
    cin >> n;
    cout << "Enter which note needed : ";
    cin>> m;

    switch (m)
    {
    case 10:
         no = n/m;
        cout<<"For fullfill this with 10  ruppes note we need : "<<no;
        break;
    case 20:
         no = n/m;
        cout<<"For fullfill this with 20  ruppes note we need : "<<no;
        break;
    case 50:
         no = n/m;
        cout<<"For fullfill this with 50  ruppes note we need : "<<no;
        break;
    case 100:
         no = n/m;
        cout<<"For fullfill this with 100 ruppes note we need : "<<no;
        break;
    
    
    }
}