#include<bits/stdc++.h>
using namespace std;
class ClassA{
    public:
    ClassA(int n){
        int s=1;
        for(int i=n;i>0;i--){
            s*=i;
        }
        cout<<s;
    }
};
int main(){
    int n;
    cin>>n;
    ClassA obj1(n);
    return 0;
}