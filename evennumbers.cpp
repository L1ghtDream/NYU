#include <iostream>
#include <iomanip>
using namespace std;

int n;

int main()
{
    cout << "Please enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i * 2 << endl;
    }
}