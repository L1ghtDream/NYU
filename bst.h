#include <iostream>

using namespace std;

class Data {
public:
    int val;
    int count;

    Data() {
        this->val = 0;
        this->count = 0;
    }
};

class BST {
public:
    int data;
    BST *left, *right;

    BST();

    BST(int);

    void insert(int);

    int nth_node(int n);

    void nth_node(BST *node, int n, Data *data);
};

BST::BST() {
    this->data = 0;
    this->left = nullptr;
    this->right = nullptr;
}

BST::BST(int data) {
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
}

void BST::insert(int data) {
    if (this->data < data) {
        if (this->right == nullptr) {
            this->right = new BST(data);
        } else {
            this->right->insert(data);
        }
    } else {
        if (this->left == nullptr) {
            this->left = new BST(data);
        } else {
            this->left->insert(data);
        }
    }
}

int BST::nth_node(int n) {

    Data *data = new Data;

    nth_node(this, n, data);

    //cout << data->count<<endl;
    //cout << data->val<<endl;

    return data->val;
}

void BST::nth_node(BST *node, int n, Data *data) {

    if(node->left!= nullptr){
        nth_node(node->left, n, data);
    }

    data->count++;

    if(data->count==n){
        data->val=node->data;
    }

    if(node->right!= nullptr){
        nth_node(node->right, n, data);
    }




}

/*

   10
   /\
  /  \
 1    20
 /\   /\
x  2 x 30

 */