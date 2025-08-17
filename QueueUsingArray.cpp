#include<iostream>
using namespace std;

class Queue {
    int size;
    int q[10];
    int currentSize;
    int start, end;

public:   // constructor must be public
    Queue() {
        size = 10;
        currentSize = 0;
        start = -1;
        end = -1;  
    }

    void push(int val) {
        if (currentSize == size) {
            cout << "The Queue is full don't try to push into queue" << endl;
            return;
        }
        if (currentSize == 0) {
            start = 0;
            end = 0;
            q[end] = val;   // fix: actually store the value
        } else {
            end = (end + 1) % size;
            q[end] = val;
        }
        currentSize++;
    }

    int pop() {
        if (currentSize == 0) {
            cout << "The Queue is empty " << endl;
            return -1;  // return some default
        }
        int temp = q[start];
        if (currentSize == 1) {
            start = end = -1;
        } else {
            start = (start + 1) % size;
        }
        currentSize--;
        return temp;
    }

    int top() {
        if (currentSize == 0) {
            cout << "The queue is empty " << endl;
            return -1;
        }
        return q[start];
    }
};

int main() {
    Queue t;
    t.push(10);
    t.push(20);
    t.push(30);

    cout << "Top element: " << t.top() << endl;
    cout << "Popped: " << t.pop() << endl;
    cout << "Popped: " << t.pop() << endl;
    cout << "Top element: " << t.top() << endl;

    return 0;
}
