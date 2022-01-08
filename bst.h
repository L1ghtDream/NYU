#include <iostream>

using namespace std;

class IterationData {
public:
    int returnVal;
    int iterationCount;

    IterationData() {
        this->returnVal = 0;
        this->iterationCount = 0;
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

    IterationData *nth_node(BST *node, IterationData *data, int n);
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
    return nth_node(this, new IterationData, n)->returnVal;
}

IterationData *BST::nth_node(BST *node, IterationData *data, int n) {
    if (node->left != nullptr) {
        data = nth_node(node->left, data, n);
    }
    if (data->iterationCount < n) {
        data->iterationCount++;
        if (data->iterationCount == n) {
            data->returnVal = node->data;
            return data;
        } else if (node->right != nullptr) {
            return nth_node(node->right, data, n);
        } else {
            return data;
        }
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