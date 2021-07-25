#include <iostream>
#include <iomanip>
using namespace std;

float height;
float mass;

int main()
{
    cout << "Please enter weight in pounds: ";
    cin >> mass;
    cout << "Please enter height in inches: ";
    cin >> height;

    mass *= 0.453592;
    height *= 0.0254;
    cout << fixed << setprecision(2) << "BMI is: " << mass / (height * height);
}