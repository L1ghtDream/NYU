#include "cpluspluslabs.h"
#include <fstream>

void csv_import2(NODE **data, string filename);

void add_node_tail(NODE **data, string firstname, string lastname, string email);

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

void add_node_tail(NODE **data, string firstname, string lastname, string email) {
    if (*data == nullptr) {
        NODE *tmp = new NODE;
        tmp->firstname = firstname;
        tmp->lastname = lastname;
        tmp->email = email;
        tmp->next = nullptr;
        *data = tmp;
        return;
    }
    NODE *tmp = new NODE;
    tmp->firstname = firstname;
    tmp->lastname = lastname;
    tmp->email = email;
    tmp->next = nullptr;
    (*data)->next = tmp;
}