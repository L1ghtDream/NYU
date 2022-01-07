#include <string>
#include "cpluspluslabs.h"
using namespace std;

void add_node_tail(NODE** data, string firstname,string lastname, string email);

void add_node_tail(NODE** data, string firstname,string lastname, string email){
    if(*data== nullptr){
        NODE *tmp = new NODE;
        tmp->firstname=firstname;
        tmp->lastname=lastname;
        tmp->email=email;
        tmp->next= nullptr;
        *data=tmp;
        return;
    }
    NODE *tmp = new NODE;
    tmp->firstname=firstname;
    tmp->lastname=lastname;
    tmp->email=email;
    tmp->next= nullptr;
    (*data)->next=tmp;
}

