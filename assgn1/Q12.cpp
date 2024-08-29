#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,t;
    float r;
    cout<<"Enter principal amount: ";
    cin>>p;
    cout<<"Enter interest rate: ";
    cin>>r;
    cout<<"Enter time duration(in years): ";
    cin>>t;
    float ci= p* (pow((1+(r/100)),t));
    cout<<endl;
    cout<<ci;
    return 0;
}