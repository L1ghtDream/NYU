#define MAX 1000

class Queue {
public:
    int rear_value;
    int a[MAX];
    Queue() { rear_value = -1; }
    bool enqueue(int x);
    int dequeue();
    int front();
    int rear();
};

bool Queue::enqueue(int x) {
    if(rear_value==MAX-1){
        return false;
    }
    a[++rear_value]=x;
    return true;
}

int Queue::dequeue() {

}

int Queue::front() {

}

int Queue::rear() {

}