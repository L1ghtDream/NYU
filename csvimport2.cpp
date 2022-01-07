#include "addnodet.cpp"
#include <fstream>

void csv_import2(NODE **data, string filename);

void csv_import2(NODE **data, string filename) {
    fstream fin(filename, ios::in);

    string record;
    while (fin >> record) {
        string firstname = record.substr(0, record.find(","));
        record.erase(0, record.find(",") + 1);
        string lastname = record.substr(0, record.find(","));
        record.erase(0, record.find(",") + 1);
        string email = record.substr(0, record.find(","));
        add_node_tail(data, firstname, lastname, email);
    }
}