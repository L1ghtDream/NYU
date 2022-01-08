#include "cpluspluslabs.h"

Node *new_node(int key);

Node *new_node(int key) {
    Node *node = new Node;
    node->key = key;
    return node;
}