#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> v;
    public:
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v[v.size()-1];
    }
    bool empty(){
        return v.size()==0;
    }



};

int main()
{ 
    Stack s;
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<<"The top most element of the stack is "<<s.top()<<endl;
    if(s.empty()){
        cout<<"The stack is empty"<<endl;

    }
    else{
        cout<<"The stack is not empty "<<endl;
    }

    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    

    

    return 0;
}