#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //Pyramid
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=0;j<=i-1;j++){
            cout<<"*";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    //Inverted pyramid
    for(int i=0;i<n;i++){       
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int j=i;j<n-1;j++){
            cout<<"*";
        }
        for(int j=i;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}