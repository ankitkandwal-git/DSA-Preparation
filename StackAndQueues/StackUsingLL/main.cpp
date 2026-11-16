#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

class Stack{
    public:
    Node* top;
    Stack():top(NULL){}
    void push(int x){
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }

    void pop(){
        if(top->data==-1){
            cout<<"Stack is empty"<<endl;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    int topElement(){
        if(top->data==-1) cout<<"Stack is empty";
        return top->data;
    }
    bool empty(){
        return top==NULL;
    }
};

int main(){
    Stack s;
    cout<<"Stack is empty: "<<s.empty()<<endl;
    cout<<"Pushing elements into stack: "<<endl;
    for(int i=0;i<5;i++){
        s.push(i);
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Top element of stack: "<<s.topElement()<<endl;
    cout<<"Popping elements from stack: "<<endl;
    for(int i=0;i<5;i++){
        cout<<s.topElement()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<"Stack is empty: "<<s.empty()<<endl;
}