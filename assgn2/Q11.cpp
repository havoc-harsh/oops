#include<iostream>
#include<cmath>
using namespace std;
class Polygon{
public:
    int sides;
    float length;
    int peri(int sides,float length){
        return sides*length;
    }
    float area(int sides,float length){
        float area = (sides * length * length) / (4.0 * tan(M_PI / sides));
        return area;
    }
};
int main(){
    Polygon polygon1;
    int sides;
    cout<<"Enter no of sides: ";
    cin>>sides;
    polygon1.sides=sides;
    float length;
    cout<<"Enter length of each side: ";
    cin>>length;
    polygon1.length=length;
    cout<<"Perimeter of polygon is: "<<polygon1.peri(sides,length);
    cout<<endl;
    cout<<"Area of polygon is: "<<polygon1.area(sides,length);
    return 0;
}