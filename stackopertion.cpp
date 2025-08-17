#include<iostream>
#include<vector>
using namespace std;
class Stack{
    vector <int>st;
    public:
    void push(int val){
        st.push_back(val);
    }
    void pop(){
        st.pop_back();
    }
    int top(){
        return st[st.size()-1];
    }
    bool empty(){
        return st.size()==0;
    }


};

int main()

{
    Stack s;
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.pop();
    cout<<s.top()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    
    cout<<s.empty()<<endl;


 return 0;
}