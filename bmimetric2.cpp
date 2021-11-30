#include "iostream"

using namespace std;

void bmimetricf(int weight, float height) {
    float bmi = weight / (height * height);
    cout << "BMI is: " << bmi << ", Status is ";
    if (bmi < 18.5) {
        cout << "Underweight";
    } else if (bmi < 24.9) {
        cout << "Normal";
    } else if (bmi < 29.9) {
        cout << "Overweight";
    } else {
        cout << "Obese";
    }
}

int main() {
    float weight;
    float height;
    cout << "Please enter weight in kilograms: ";
    cin >> weight;
    cout << "Please enter height in meters: ";
    cin >> height;
    bmimetricf(weight, height);

}