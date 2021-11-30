#include "iostream"
#include "iomanip"

using namespace std;

int main() {
    string str;
    string s1;
    string s2;
    cout << "Enter an odd length string: ";
    getline(cin, str);

    for (int i = 0; i < str.length() / 2; i++) {
        s1 += str[i];
    }
    for (int i = str.length() / 2 + 1; i < str.length(); i++) {
        s2 += str[i];
    }

    cout << "Middle character: " << str[str.length() / 2] << endl;
    cout << "First half: " << s1 << endl;
    cout << "Second half: " << s2 << endl;
}