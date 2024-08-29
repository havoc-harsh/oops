#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string student_name;
    int student_age;
    string student_subject;
    void get_input() {
        cout << "Enter name: ";
        getline(cin, student_name);
        cout << "Enter age: ";
        cin >> student_age;
        //cin.ignore();  
        cout << "Enter subject: ";
        getline(cin, student_subject);
    }
    void display() const {
        cout<<"Name: "<<student_name<<endl;
        cout<<"Age: "<<student_age<<endl;
        cout<<"Subject: "<<student_subject<<endl;
        cout<<endl;
    }
};

int main() {
    int numStudents;
    cout<<"Enter the no. of students: ";
    cin>>numStudents;
    cin.ignore();  
    Student* students = new Student[numStudents];
    for (int i=0;i<numStudents;++i) {
        cout<<"Enter details for student "<<i+1<<":"<<endl;
        (students+i)->get_input();
    }
    cout<<"\nStudent details:"<<endl;
    for(int i=0;i<numStudents;++i) {
        (students+i)->display();
    }
    return 0;
}
