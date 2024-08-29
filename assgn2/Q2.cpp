#include<iostream>
using namespace std;
int main(){
    int sal=0;
    float DA=0;
    float HRA=0;
    float MA=0;
    cout<<"Enter salary: ";
    cin>>sal;
    if(sal<=10000){
        DA=0.31*sal;
        HRA=0.12*sal;
        MA=250;
    }
    else if(sal<0){
        cout<<"Salary cannot be negative."<<endl;
    }
    else{
        DA=0.35*sal;
        HRA=0.15*sal;
        MA=350;
    }
    cout<<"Gross salary is: "<<(sal+DA+HRA+MA)<<endl;
    return 0;
}