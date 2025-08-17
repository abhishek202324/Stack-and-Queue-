#include<iostream>
using namespace std;
class Stack{
    int arr[5];
    int topInd;
    public:
    Stack(){
        topInd=-1;
    }
    void push(int val){
        if(topInd==4){
            cout<<"The stack is full dont try to push more elements"<<endl;
            return;
        }
        topInd++;
        arr[topInd]=val;
    }
    void pop(){
        if(topInd==-1){
            cout<<"Stack is empty and u try pop the elements "<<endl;
            return;
        }
        topInd--;
    }
    int top(){
        if(topInd==-1){
            cout<<"The stack is empty "<<endl;
            return -1;
        }
        return arr[topInd];
    }
    bool empty(){
        return topInd==-1;
    }


};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    cout<<"The top most element of the stack is "<<s.top()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();

    }
    cout<<endl;

    if(s.empty())cout<<"The stack is empty "<<endl;
    else cout<<"The stack is full"<<endl;
    
    
    return 0;
}