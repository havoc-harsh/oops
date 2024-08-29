#include<bits/stdc++.h>
using namespace std;
class Car{
public:
    string make;
    string model;
    int year;
    float speed;
    void SpeedControl(float speed){
        if(speed<40){
            speed=60;
            cout<<"Speed is accelerated to "<<speed;
            return;
        }
        else if(speed>100){
            speed=80;
            cout<<"Brake applied. Speed is now "<<speed;
            return;
        }
        else{
            cout<<"You are going at acceptable speed.";
            return;
        }
    }
    
};
int main(){
    Car car1;
    cout<<"Enter car make: ";
    cin>>car1.make;
    cout<<"Enter car model: ";
    cin>>car1.model;
    cout<<"Enter year of manufacture: ";
    cin>>car1.year;
    float speed;
    cout<<"Enter car speed: ";
    cin>>speed;
    car1.speed=speed;
    car1.SpeedControl(speed);

    return 0;
}