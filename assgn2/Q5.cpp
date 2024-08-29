#include<iostream>
using namespace std;
int fibo(int n){
    if(n<=1){
        return n;
    }
    return fibo(n-2)+fibo(n-1);
    
    
}
int main(){
    int n;
    cout<<"Enter n for printing fibonacci series: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fibo(i)<<" ";
    }
    
    
    return 0;
}

// void fibo(int n){
//     int a=0;
//     int b=1;
//     while(n>0){
    
//     cout<<a<<" ";
//     int temp=a;
//     a=b;
//     b=temp+b;
//     n--;
//     }
    
// }
// int main(){
//     int n;
//     cout<<"Enter n for printing fibonacci series: ";
//     cin>>n;
//     fibo(n);
    
//     return 0;
// }
    
