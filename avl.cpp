#include "cpluspluslabs.h"
#include <cmath>

using namespace std;

Node *new_node(int key);

Node *insertnb(Node *node, int key);

Node *left_rotate(Node *x);

Node *right_rotate(Node *x);

Node *new_node(int key) {
    Node *node = new Node;
    node->key = key;
    node->height = 1;
    node->left= nullptr;
    node->right= nullptr;
    return node;
}

Node *insertnb(Node *node, int key) {
    //cout<<"Call on " << node<<endl;
    if (node == nullptr) {
        return new_node(key);
    }

    node->height++;

    //cout<<"L: "<<node->left<<endl;
    //cout<<"R: "<<node->right<<endl;

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

Node *right_rotate(Node *x){
    Node *tmp;
    tmp = x->left;
    x->left = tmp->right;
    tmp->right = x;
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
