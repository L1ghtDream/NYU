#include "iostream"
#include "iomanip"

using namespace std;


int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    int ascii = (int) c;
    if (ascii >= '0' && ascii <= '9') {
        cout << c << " is  a digit.";
    } else if (ascii >= 'a' && ascii <= 'z') {
        cout << c << " is  a lower case  letter.";
    } else if (ascii >= 'A' && ascii <= 'Z') {
        cout << c << " is  an  upper case  letter.";
    } else {
        cout << c << " is  a non-alphanumeric  character.";
    }

}