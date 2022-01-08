#define MAX 1000

class Stack {
public:
    int top;
    int a[MAX]; // Maximum size of Stack
    Stack() { top = -1; }

    bool push(int x);

    int pop();

    int peek();

    bool isEmpty();
};

bool Stack::push(int x) {
    top++;
    a[top] = x;
}

int Stack::pop() {
    if (top == -1) {
        return 0;
    }
    return a[top--];
}

int Stack::peek() {
    if (top == -1) {
        return 0;
    }
    return a[top];
}

bool Stack::isEmpty() {
    return top == -1;
}
