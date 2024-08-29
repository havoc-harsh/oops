#include <iostream>
#include <string>
using namespace std;
class Book {
public:
    string book_title;
    string book_author;
    int year;
    void get_input() {
        cout<<"Enter title: ";
        getline(cin, book_title);
        cout<<"Enter author: ";
        getline(cin, book_author);
        cout<<"Enter year: ";
        cin>>year;
        cin.ignore();
    }
    void display() const {
        cout<<"Title of book: "<<book_title<<endl;
        cout<<"Author of book: "<<book_author<<endl;
        cout<<"Year of publishing: "<<year<<endl;
        cout<<endl;
    }
};

int main() {
    int numBooks;
    cout<<"Enter the number of books: ";
    cin>>numBooks;
    cin.ignore();
    Book* books=new Book[numBooks];

    for (int i=0;i<numBooks;++i) {
        cout<<"Enter details for book "<<i + 1<<":"<<endl;
        books[i].get_input();
    }

    cout<<"\nBook details:"<<endl;
    for (int i=0;i<numBooks;++i) {
        books[i].display();
    }
    return 0;
}
