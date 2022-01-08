class BST {
public:
    int data;
    BST *left, *right;

    BST();

    BST(int);

    void insert(int);

    int nth_node(int n);
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

}