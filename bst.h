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
    data = 0;
}

BST::BST(int data) {
    this->data = data;
}

void BST::insert(int data) {

}

int BST::nth_node(int n) {

}