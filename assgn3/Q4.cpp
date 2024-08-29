#include<iostream>
using namespace std;
inline int sumOfNumber(int a,int b,int c){
    return a+b+c;
}
int main(){
    int n1,n2,n3;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;
    cout<<"Enter third number: ";
    cin>>n3;
    cout<<"The sum of the numbers is: "<<sumOfNumber(n1,n2,n3)<<endl;

    return 0;
}