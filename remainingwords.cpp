#include "iostream"
#include "string"

using namespace std;


string remainingwords(string s) {
    return s.substr(s.find(" ") + 1, s.length() - 1);
}
