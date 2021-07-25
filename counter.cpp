#include <iostream>
using namespace std;

int qu, di, ni, pe;
int dollars, cents;

int main()
{
    cout << "# of quarters: ";
    cin >> qu;
    cout << "# of dimes: ";
    cin >> di;
    cout << "# of nickels: ";
    cin >> ni;
    cout << "# of pennies: ";
    cin >> pe;
    cents = qu * 25 + di * 10 + 5 * ni + pe;
    dollars = cents / 100;
    cents -= dollars * 100;

    cout << "The total is " << dollars << " dollars and " << cents << " cents";
}