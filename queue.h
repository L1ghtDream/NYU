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
    if(rear_value==-1){
        return 0;
    }
    int output = a[0];

    for(int i=1;i<rear_value;i++){
        a[i-1]=a[i];
    }

    rear_value--;
    return output;

}

int Queue::front() {
    if(rear_value==-1){
        return 0;
    }

    return a[0];
}

int Queue::rear() {
    return a[rear_value];
}