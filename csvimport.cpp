#include <string>
#include <fstream>
#include <iostream>

using namespace std;

void csv_import(string data[][10], int columns, int *records, string filename);

void csv_import(string data[][10], int columns, int *records, string filename) {
    *records = 0;
    fstream fin(filename, ios::in);

    string record;
    while (fin >> record) {
        for (int i = 0; i < columns; i++) {
            data[*records][i] = record.substr(0, record.find(","));
            record.erase(0, record.find(",") + 1);
        }

        (*records)++;
    }
}