#include "iostream"
#include "iomanip"

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
    cout << "Does customer have a club card? (Y/N): ";
    cin >> cardChoise;
    if (cardChoise == "y" || cardChoise == "Y") {
        card = true;
    } else {
        card = false;
    }
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> tax;

    float price = price1 + price2;
    cout << setprecision(2) << fixed << "Base price = " << price << endl;

    price1 <= price2 ? price = price1 / 2 + price2 : price = price2 / 2 + price1;
    if (card) {
        price = 90.0 * price / 100.0;
    }
    cout << setprecision(2) << fixed << "Price after discounts = " << price << endl;

    price = (100.0 + tax) * price / 100.0;
    cout << setprecision(2) << fixed << "Total price = " << price << endl;
}