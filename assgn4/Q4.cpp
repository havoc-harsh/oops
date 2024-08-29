#include<bits/stdc++.h>
using namespace std;
class Arithmetic{
    public:
    double operand1;
    double operand2;
    Arithmetic(double op1,double op2):operand1(op1),operand2(op2) {}
    int add(){
        return operand1+operand2;
    }
    int sub(){
        return operand1-operand2;
    }
    int mul(){
        return operand1*operand2;
    }
    int div(){
        if(operand2==0){
            cout<<"Cannot divide by zero! ";
            return 0;
        }
        return operand1/operand2;
    }
};
int main(){
    int num1;
    cout<<"Enter number 1: ";
    cin>>num1;
    int num2;
    cout<<"Enter number 2: ";
    cin>>num2;
    Arithmetic calculate1(num1,num2);
    while(true){
        cout<<"1.Add numbers"<<endl;
        cout<<"2.Subtract numbers"<<endl;
        cout<<"3.Multiply numbers"<<endl;
        cout<<"4.Divide numbers"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter option (1 - 5): ";
        char ans;
        cin>>ans;
        if(ans=='5') break;
        switch(ans){
            case '1':
                cout<<"Sum of numbers is: "<<calculate1.add()<<endl;
                cout<<endl;
                break;
            case '2':
                cout<<"Difference of numbers is: "<<calculate1.sub()<<endl;
                cout<<endl;
                break;
            case '3':
                cout<<"Product of numbers is: "<<calculate1.mul()<<endl;
                cout<<endl;
                break;
            case '4':
                cout<<"Division of numbers is: "<<calculate1.div()<<endl;
                cout<<endl;
                break;
            default:
                cout<<"Invalid input!!";
                cout<<endl;
                break;
        }}
    return 0;
}