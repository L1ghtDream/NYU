#include "cpluspluslabs.h"

Node *new_node(int key);

Node *insertnb(Node *node, int key);

Node *new_node(int key) {
    Node *node = new Node;
    node->key = key;
    node->height = 1;
    return node;
}

Node *insertnb(Node *node, int key) {
    if (node == nullptr) {
        return new_node(key);
    }

    if (node->key < key) {
        node->right = new_node(key);
    } else {
        node->left = new_node(key);
    }

    return node;
}