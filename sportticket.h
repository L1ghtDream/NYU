#include <iostream>
#include <utility>
#include <vector>
#include "showticket.h"

using namespace std;

class SportTicket;

class SportTicket : public ShowTicket {

private:
    bool sold;

public:
    SportTicket(string row, string seat) : ShowTicket(row, seat) {
        this->sold = false;
    }

    bool beer_sold();

    void sell_beer();

    string print_ticket();
};

bool SportTicket::beer_sold() {
    if (!is_sold()) {
        return false;
    }
    return sold;
}

void SportTicket::sell_beer() {
    if (!is_sold()) {
        return;
    }
    sold = true;
}

string SportTicket::print_ticket() {
    return ShowTicket::print_ticket() + " " + (beer_sold() ? "bear" : "nobear");
}
