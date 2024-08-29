#include<iostream>
using namespace std;
int SumOfNums(int a,int b,int c){
    return a+b+c;
}
int main(){
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    cout<<"Sum is: "<<SumOfNums(a,b,c);
    return 0;
}