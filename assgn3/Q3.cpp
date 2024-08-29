#include <iostream>
using namespace std;
class Compare{
    public:
    int n1,n2;
    void input(){
        cout<<"Enter the first number: ";
        cin>>n1;
        cout<<"Enter the second number: ";
        cin>>n2;
    }
    int Maxi(){
        return max(n1,n2);
    }
    void display(){
        int maxNumber=Maxi();
        cout<<"The largest number is: "<<maxNumber<<endl;
    }
};

int main() {
    Compare compare1;
    compare1.input();
    compare1.display();
    return 0;
}
