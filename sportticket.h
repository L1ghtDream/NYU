#include <iostream>
#include <utility>
#include <vector>
#include "showticket.h"

using namespace std;

class SportTicket;

class SportTicket : public ShowTicket {

private:
    bool beerSold;

public:
    SportTicket(string row, string seat) : ShowTicket(row, seat) {
        this->beerSold = false;
    }

    bool beer_sold();

    void sell_beer();

    string print_ticket();
};

bool SportTicket::beer_sold() {
    return beerSold;
}

void SportTicket::sell_beer() {
    beerSold = true;
}

string SportTicket::print_ticket() {
    //AA 101 sold nobeer;
    return row + " " + seat + " " + (SportTicket::is_sold() ? "sold" : "available") + + " " + (beer_sold() ? "bear" : "nobear");;
    //ShowTicket::print_ticket() + " " + (beer_sold() ? "bear" : "nobear");
}
