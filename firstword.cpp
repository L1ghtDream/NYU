#include "iostream"
#include "string"

using namespace std;


string firstword(string s){
    return s.substr(0, s.find(" "));
}