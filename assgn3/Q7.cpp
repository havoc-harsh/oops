#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=10,b=20,c=5;
    //Operator precedence
    int ans1=a+b*c;
    int ans2=a*b/c;
    int ans3=a-b+c;
    int ans4=a+b*c-b/c;
    
    //Operator associativity
    int ans5=a<b>c; 
    int ans6=a=b=c;
    
    cout<<"ans1: "<<ans1<<endl;
    cout<<"ans2: "<<ans2<<endl;
    cout<<"ans3: "<<ans3<<endl;
    cout<<"ans4: "<<ans4<<endl;
    cout<<"ans5: "<<ans5<<endl;
    cout<<"ans6: "<<ans6<<endl;
    return 0;
}
