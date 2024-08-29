#include<iostream>
using namespace std;
int main(){
    int p,t;
    float r;
    cout<<"Enter principal amount: ";
    cin>>p;
    cout<<endl;
    cout<<"Enter interest rate: ";
    cin>>r;
    cout<<endl;
    cout<<"Enter time duration(in years): ";
    cin>>t;
    cout<<endl;
    float si=(p*r*t)/100;
    cout<<"Simple interest is: "<<si<<endl;

    return 0;
}