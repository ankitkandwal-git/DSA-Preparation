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
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
};