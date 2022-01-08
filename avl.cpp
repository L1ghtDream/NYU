#include "cpluspluslabs.h"
#include <cmath>

using namespace std;

Node *new_node(int key);

Node *insertnb(Node *node, int key);

Node *left_rotate(Node *x);

int height(Node *node);

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

    node->height++;
    if (node->key < key) {
        insertnb(node->right, key);
    } else {
        insertnb(node->left, key);
    }

    return node;
}

Node *left_rotate(Node *x) {
    Node *t;
    t = x->left;
    x->left = t->right;
    t->right = x;
    return t;
}

