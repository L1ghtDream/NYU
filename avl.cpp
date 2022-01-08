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
        if (node->right == nullptr) {
            node->right = new_node(key);
        } else {
            insertnb(node->right, key);
        }
    } else {
        if (node->left == nullptr) {
            node->left = new_node(key);
        } else {
            insertnb(node->left, key);
        }
    }

    return node;
}

Node *left_rotate(Node *x) {
    Node *tmp;
    tmp = x->right;
    x->right = tmp->left;
    tmp->left = x;
    return tmp;
}
/*

a
 \
  b
   \
    c

  b
 /\
a  c

 */
