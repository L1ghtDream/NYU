#include <iostream>
#include <iomanip>
using namespace std;

float height;
float mass;

int main()
{
    cout << "Please enter weight in kilograms: ";
    cin >> mass;
    cout << "Please enter height in meters: ";
    cin >> height;
    cout << fixed << setprecision(2) << "BMI is: " << mass / (height * height);
}