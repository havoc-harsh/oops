#include <iostream>
using namespace std;

class TicBooth {
private:
    int people_visited;     
    int tickets_sold;       
    double money_collected; 

public:
    TicBooth() {
        people_visited = 0;
        tickets_sold = 0;
        money_collected = 0.0;
    }
    void incrementPeopleOnly() {
        people_visited++;
    }
    void sellTicket() {
        people_visited++;
        tickets_sold++;
        money_collected += 2.50;
    }
    void displayTotals() const {
        cout << "Total People Visited: " << people_visited << endl;
        cout << "Total Money Collected: Rs. " << money_collected << endl;
    }
    void displayTicketsSold() const {
        cout << "Total Tickets Sold: " << tickets_sold << endl;
    }
};

int main() {
    TicBooth booth;
    booth.incrementPeopleOnly(); 
    booth.incrementPeopleOnly(); 
    booth.sellTicket(); 
    booth.sellTicket(); 
    booth.displayTotals();
    booth.displayTicketsSold();

    return 0;
}
