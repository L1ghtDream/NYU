#include <iostream>
#include <utility>
#include <vector>
#include "sportticket.h"

using namespace std;

class TicketSales;

template<typename Base, typename T>
inline bool instanceof(const T*) {
    return is_base_of<Base, T>::value;
}

class TicketSales {

public:

    string print_ticket(ShowTicket* myticket);

};


string TicketSales::print_ticket(ShowTicket* myticket) {
    return myticket->print_ticket();
}

