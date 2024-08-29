#include<iostream>
using namespace std;
int main(){
    float sal;
    float tax=0;
    cout<<"Enter salary: ";
    cin>>sal;
    if(sal>=10000){
        tax=0.40*sal;
    }
    else if(sal>=7500 && sal<=9999){
        tax=0.30*sal;
    }
    else if(sal<=7499){
        tax=0.20*sal;
    }
    cout<<"Income tax for your salary is: "<<tax<<endl;
    return 0;
}