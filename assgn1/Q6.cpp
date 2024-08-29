#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<"new a is: "<<a<<endl;
    cout<<"new b is: "<<b<<endl;
    return 0;
}