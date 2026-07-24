#include<iostream>
using namespace std;
void ap(int n){
    int term = (3*n)+7;
    cout <<"The term is : "<<term;
}
int main(){
    int a ;
    cout<<"Enter a number :";
    cin>>a;
    ap(a);
}