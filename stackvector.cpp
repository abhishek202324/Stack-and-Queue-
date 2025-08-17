#include<iostream>
using namespace std;
class Stack{

    int arr[5];
    int topind;
    public:
    Stack(){
        topind=-1;

    }
    void push(int val){
        if(topind==4){
            cout<<"Stack is over flow"<<endl;
            return;
        }
        topind++;
        arr[topind]=val;
    }
    void pop(){
        if(topind==-1){
            cout<<"Stack is empty or under the underflowcase"<<endl;
            return;
        }
        topind--;
    }
    int top(){
        if(topind==-1){
            cout<<"Stack is empty "<<endl;
            return -1;
        }
        return arr[topind];
    }
    bool empty(){
        return topind==-1;
    }

};
int main()
{
    Stack s;
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);
    s.push(17);
    s.push(18);
    
    cout<<"The Top most element in the stack "<<s.top()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}