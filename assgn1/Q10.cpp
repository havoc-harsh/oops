#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter temperature in Fahrenheit: ";
    cin>>n;
    float temp=(n-32)*(0.56);
    cout<<"Temperature in celsius is: "<<temp<<endl;
    return 0;
}