#include <iostream>
#include <utility>
#include <vector>

using namespace std;

class ShowTickets;

class ShowTickets {

public:
    vector<string> sold;

    bool is_sold(string row, string seat);

    void sell_seat(string row, string seat);

    string print_ticket(string row, string seat);

    string getIdentifier(string row, string seat);
};

bool ShowTickets::is_sold(string row, string seat) {
    return std::find(sold.begin(), sold.end(), getIdentifier(row, seat)) != sold.end();
}

void ShowTickets::sell_seat(string row, string seat){
    sold.push_back(getIdentifier(row, seat));
}

string ShowTickets:: print_ticket(string row, string seat){
    return row + " " + seat + " " + (is_sold(row, seat) ? "sold" : "available");
}

string ShowTickets::getIdentifier(string row, string seat) {
    return row + seat;
}