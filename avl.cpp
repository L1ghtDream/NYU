#include "cpluspluslabs.h"
#include <cmath>

using namespace std;

Node *new_node(int key);

Node *insertnb(Node *node, int key);

Node *left_rotate(Node *x);

Node *right_rotate(Node *x);

int get_balance(Node *x);

int height(Node *N);

Node *insert(Node *node, int key);

Node *new_node(int key) {
    Node *node = new Node;
    node->key = key;
    node->height = 1;
    node->left = nullptr;
    node->right = nullptr;
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

Node *right_rotate(Node *x) {
    Node *tmp;
    tmp = x->left;
    x->left = tmp->right;
    tmp->right = x;
    return tmp;
}

int get_balance(Node *x) {
    if (x == nullptr) {
        return 0;
    }
    return height(x->left) - height(x->right);
}

int height(Node *N) {
    if (N == nullptr) {
        return 0;
    }
    return N->height;
}

Node *insert(Node *node, int key) {
    if (node == nullptr){
        return (new_node(key));
    }

    if (key < node->key){
        node->left = insert(node->left, key);
    }
    else if (key > node->key){
        node->right = insert(node->right, key);
    }
    else{
        return node;
    }

    node->height = 1 + max(height(node->left),
                           height(node->right));

    int balance = get_balance(node);

    if (balance > 1 && key < node->left->key){
        return right_rotate(node);
    }

    if (balance < -1 && key > node->right->key){
        return left_rotate(node);
    }

    if (balance > 1 && key > node->left->key) {
        node->left = left_rotate(node->left);
        return right_rotate(node);
    }

    if (balance < -1 && key < node->right->key) {
        node->right = right_rotate(node->right);
        return left_rotate(node);
    }

    return node;
}