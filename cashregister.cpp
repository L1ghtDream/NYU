#include "iostream"
#include "cmath"
using namespace std;


int main() {
    float price1;
    float price2;
    bool card;
    float tax;

    cout << "Enter price of the first item: ";
    cin >> price1;
    cout << "Enter price of the second item: ";
    cin >> price2;
    string cardChoise;
    cout << "Does customer have a club card? ";
    cin >> cardChoise;
    if (cardChoise == "y" || cardChoise == "Y") {
        card = true;
    } else {
        card = false;
    }
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> tax;

    float price = price1 + price2;
    price = ceil(price * 100.0) / 100.0;
    cout << "Base price = " << price << endl;
    price1 <= price2 ? price = price1 / 2 + price2 : price = price2 / 2 + price1;
    if (card) {
        price = 90.0 * price / 100.0;
    }
    price = ceil(price * 100.0) / 100.0;
    cout << "Price after discounts = " << price << endl;
    price = (100.0 + tax) * price / 100.0;
    price = ceil(price * 100.0) / 100.0;
    cout << "Total price = " << price << endl;
}