#include <iostream>
#include <iomanip>
using namespace std;

int n, tmp1, tmp2;

int main()
{
    cout << "Please enter a positive integer greater than 1: ";
    cin >> n;
    tmp1 = 1;
    tmp2 = 1;
    cout << tmp1 << endl
         << tmp2 << endl;
    n -= 2;
    for (int i = 0; i < n; i++)
    {
        int output = tmp1 + tmp2;
        tmp1 = tmp2;
        tmp2 = output;
        cout << output << endl;
    }
}