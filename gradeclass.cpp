#include <iostream>
#include <iomanip>
using namespace std;

int g1, g2;

int main()
{
    cin >> g1 >> g2;
    if (g1 < 60 && g2 < 60)
    {
        cout << "Student Failed:(";
    }
    else if (g1 >= 95 && g2 >= 95)
    {
        cout << "Student Graduated with Honors:)";
    }
    else
    {
        cout << "Student Graduated!";
    }
}