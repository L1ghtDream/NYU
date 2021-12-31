#include <iostream>
#include <utility>
#include <vector>

using namespace std;

class ShowTicket;

vector<string> sold;

class ShowTicket {
private:
    string row;
    string seat;

public:
    ShowTicket(string row, string seat) {
        this->row = row;
        this->seat = seat;
    }

    bool is_sold();

    void sell_seat();

    string print_ticket();

    string getIdentifier();
};

bool ShowTicket::is_sold() {
    return std::find(sold.begin(), sold.end(), getIdentifier()) != sold.end();
}

void ShowTicket::sell_seat() {
    sold.push_back(getIdentifier());
}

string ShowTicket::print_ticket() {
    return row + " " + seat + " " + (is_sold() ? "sold" : "available");
}

string ShowTicket::getIdentifier() {
    return row + seat;
}