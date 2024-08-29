#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter number: ";
    cin>>a;
    cout<<"Enter number: ";
    cin>>b;
    cout<<"Enter number: ";
    cin>>c;
    cout<<"Enter number: ";
    cin>>d;
    int highest = a>b ? a : b;
    highest = highest>c ? highest : c;
    highest = highest>d ? highest : d;
    cout<<"Largest number is: "<<highest;
    return 0;
}