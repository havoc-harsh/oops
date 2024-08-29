#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter number: ";
    cin>>a;
    cout<<"Enter number: ";
    cin>>b;
    cout<<"Enter number: ";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is the biggest.";
    }
    else if(b>a && b>c){
        cout<<b<<" is the biggest.";
    }
    else{
        cout<<c<<" is the biggest.";
    }
    return 0;
}