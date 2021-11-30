#include "iostream"
#include "iomanip"
#include "string"

using namespace std;

/*
Enter the time the call started at (hhmm): 2350
Enter the duration of the call (in minutes): 22
This call will cost $5.50
 */

int main() {
    string day;
    int time;
    int duration;

    cout << "Enter the day the call started at: ";
    cin >> day;
    cout << "Enter the time the call started at (hhmm): ";
    cin >> time;
    cout << "Enter the duration of the call (in minutes): ";
    cin >> duration;

    float cost = 0;

    if (day == "Mon" || day == "Tue" || day == "Wed" || day == "Thr" || day == "Fri") {
        if (time >= 800 && time <= 1800) {
            cost = duration * 0.40;
        } else {
            cost = duration * 0.25;
        }
    } else {
        cost = duration * 0.15;
    }

    cout << setprecision(2) << fixed << "This call will cost $" << cost;
}