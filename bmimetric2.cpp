#include "iostream"

bmimetricf(int weight, float height) {
    float data = weight / (height * height);
    if (data < 18.5) {
        std::cout << "Underweight";
    } else if (data < 24.9) {
        std::cout << "Normal";
    } else if (data < 29.9) {
        std::cout << "Overweight";
    } else {
        std::cout << "Obese";
    }
    return data;
}