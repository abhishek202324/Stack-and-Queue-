#include<iostream>
using namespace std;
class Queue{
    stack<int>s1;
    stack<int>s2;
    public:
    Queue(){
        stack<int>s1;
        stack<int>s2;
    }
    void push(int val){
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(val);
        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    int top(){
        return s1.top();
    }
    void pop(){
        s1.pop();
    }
    bool empty(){
        return s1.size()==0;
    }


};

int main()
{
    Queue q;
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    cout<<"The topmost element of the queue "<<q.top()<<endl;  
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }

    return 0;
}