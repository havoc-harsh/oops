#include<bits/stdc++.h>
using namespace std;
class Calculator{
    public:
    int operationCount;
    Calculator():operationCount(0){}
    int add(int a,int b){
        operationCount++;
        return a+b;
    }
    int sub(int a,int b){
        operationCount++;
        return a-b;
    }
    int mul(int a,int b){
        operationCount++;
        return a*b;
    }
    int div(int a,int b){
        if(b==0){
            cout<<"Cannot divide by zero! ";
            return 0;
        }
        operationCount++;
        return a/b;
    }
    int GetOperationCount(){
        return operationCount;
    }

};
int main(){
    Calculator calculate1;
    char operation;
    int n1,n2;
    while(true){
        cout<<"Enter operation (+,-,*,/) or press q to quit: ";
        cin>>operation;
        if(operation=='q' || operation=='Q'){
            cout<<"Goodbye!";
            break;
        }
        
        
        cout<<"Enter first number: ";
        cin>>n1;
        cout<<"Enter second number: ";
        cin>>n2;
        switch(operation){
            case '+':
                cout<<"Sum of numbers is: "<<calculate1.add(n1,n2)<<endl;
                cout<<endl;
                break;
            case '-':
                cout<<"Difference of numbers is: "<<calculate1.sub(n1,n2)<<endl;
                cout<<endl;
                break;
            case '*':
                cout<<"Product of numbers is: "<<calculate1.mul(n1,n2)<<endl;
                cout<<endl;
                break;
            case '/':
                cout<<"Division of numbers is: "<<calculate1.div(n1,n2)<<endl;
                cout<<endl;
                break;
            default:
                cout<<"Invalid input!!";
                cout<<endl;
                break;
        }
    }
    return 0;
}