#include <iostream>
using namespace std;

int qu, di, ni, pe;
int dollars, cents;

int main()
{
    cout << "# of dollars: ";
    cin >> dollars;
    cout << "# of cents: ";
    cin >> cents;
    cents += dollars * 100;
    qu = cents / 25;
    cents -= qu * 25;
    di = cents / 10;
    cents -= di * 10;
    ni = cents / 5;
    cents -= ni * 5;
    pe = cents;

    cents = qu * 25 + di * 10 + 5 * ni + pe;
    dollars = cents / 100;
    cents -= dollars * 100;

    cout << "The coins are " << qu << " quarters, " << di << " dimes, " << ni << " nickels and " << pe << " pennies";
}