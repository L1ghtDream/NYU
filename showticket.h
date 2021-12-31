#include <iostream>
#include <utility>
#include <vector>

using namespace std;

class ShowTicket;

vector<string> sold;

class ShowTicket {
private:
    string row;
    string no;

public:
    ShowTicket(string row, string no) {
        this->row = row;
        this->no = no;
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
    return row + " " + no + " " + (is_sold() ? "sold" : "available");
}

string ShowTicket::getIdentifier() {
    return row + no;
}