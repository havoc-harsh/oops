#include <iostream>
using namespace std;
class ClassB;
class ClassA {
public:
    int numA;
    ClassA(int n) : numA(n) {}
    friend int addValues(ClassA, ClassB);
};

class ClassB {
public:
    int numB;
    ClassB(int n) : numB(n) {}
    friend int addValues(ClassA, ClassB);
};
inline int addValues(ClassA a, ClassB b) {
    return a.numA + b.numB;
}

int main() {
    ClassA objA(15);
    ClassB objB(25);
    int result = addValues(objA, objB);

    cout << "The sum of the two numbers is: " << result << endl;

    return 0;
}
