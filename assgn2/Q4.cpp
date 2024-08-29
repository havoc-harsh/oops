#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int sum=0; 
    do{sum+=n;
    n--;}while(n>0);
    cout<<"Sum of first n natural numbers is: "<<sum<<endl;
    return 0;
}