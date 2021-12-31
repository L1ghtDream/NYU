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
    SportTicket(string row, string no) : ShowTicket(row, no) {

    }

    bool beer_sold();

    void sell_beer();

    string print_ticket();
};

bool SportTicket::beer_sold() {
    return sold;
}

void SportTicket::sell_beer() {
    sold = true;
}

string SportTicket::print_ticket() {
    return ShowTicket::print_ticket() + " " + (beer_sold() ? "bear" : "nobear");
}
