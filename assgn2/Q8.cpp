#include<iostream>
using namespace std;
void Exchange(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"Value of a and b inside: "<<a<<" "<<b;
    cout<<endl;
    return;
}


int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Values of a and b before function: "<<a<<" "<<b;
    cout<<endl;
    Exchange(a,b);
    cout<<"Values of a and b after function: "<<a<<" "<<b;
    return 0;
}