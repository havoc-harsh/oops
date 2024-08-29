#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int roll_no;
    float marks;
    string Grade(float marks){
        if(marks<=100 && marks>90){
            return "A+";
        }
        else if(marks<=90 && marks>80){
            return "A";
        }
        else if(marks<=80 && marks>75){
            return "B+";
        }
        else if(marks<=75 && marks>70){
            return "B";
        }
        else if(marks<=70 && marks>65){
            return "C";
        }
        else{
            return "D";
        }
    }
};
int main(){
    Student student1;
    cout<<"Enter student name: ";
    cin>>student1.name;
    cout<<"Enter student roll no: ";
    cin>>student1.roll_no;
    float marks;
    cout<<"Enter student marks: ";
    cin>>marks;
    student1.marks=marks;
    cout<<student1.Grade(marks);

    return 0;
}