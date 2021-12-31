#include <iostream>
#include <utility>
#include <vector>

using namespace std;

class ShowTicket;

class ShowTicket {
private:
    string row;
    string seat;
    bool sold;

public:
    ShowTicket(string row, string seat) {
        this->row = row;
        this->seat = seat;
        this->sold = false;
    }

    bool is_sold();

    void sell_seat();

    string print_ticket();

};

bool ShowTicket::is_sold() {
    return sold;
}

void ShowTicket::sell_seat() {
    sold = true;
}

string ShowTicket::print_ticket() {
    return row + " " + seat + " " + (is_sold() ? "sold" : "available");
}
