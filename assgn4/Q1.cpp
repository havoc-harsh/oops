#include <iostream>
using namespace std;

class ClassB;
class ClassA {
public:
    int numA;
    ClassA(int n){
        numA=n; }
    friend int findMax(ClassA, ClassB);
};

class ClassB {
public:
    int numB;
    ClassB(int n) : numB(n) {}
    friend int findMax(ClassA, ClassB);
};
int findMax(ClassA a, ClassB b) {
    return (a.numA > b.numB) ? a.numA : b.numB;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);
    cout << "The maximum of the two numbers is: " << findMax(objA, objB) << endl;
    return 0;
}
