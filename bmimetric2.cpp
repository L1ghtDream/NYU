#include "iostream"

float bmimetricf(int weight, float height) {
    float data = weight / (height * height);
    if (data < 18.5) {
        cout << "Underweight";
    } else if (data < 24.9) {
        cout << "Normal";
    } else if (data < 29.9) {
        cout << "Overweight";
    } else {
        cout << "Obese";
    }
    return data;
}