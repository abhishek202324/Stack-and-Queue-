#include<iostream>
#include<queue>
using namespace std;

class Stack {
    queue<int> q;

public:
    Stack() { }

    void push(int val) {
        int s = q.size();
        q.push(val);
        for (int i = 0; i < s; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int n = q.front();
        q.pop();
        return n;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();   // better than q.size()==0
    }

    int size() {
        return q.size();
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(34);

    cout << "The top most element of the stack is " << s.top() << endl;

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout << "\nThe size of the stack is now " << s.size() << endl;
    return 0;
}
