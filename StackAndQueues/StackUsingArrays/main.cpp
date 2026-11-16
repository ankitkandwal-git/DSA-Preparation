
#include<bits/stdc++.h>
using namespace std;

class Stack{
    int *arr;
    int top;
    int capacity;
    public:
    Stack(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
    }
    ~Stack(){
        delete[]arr;
    }
    int push(int num){
        if(top<capacity-1){
            arr[top] = num;
            return 0;
        }
        else return -1;
    }

    int pop(){
        if(top==-1) return -1;
        else return arr[top--];
    }
    int topElement(){
        if(top==-1) return -1;
        else return arr[top];
    }
    bool empty(){
        return top==-1;
    }
    int size(){
        return capacity-1;
    }
    bool isFull(){
        return top == capacity-1;
    }
};
int main(){
    int n;
    cin>>n;
    Stack s(n);
    cout<<"Stack is empty: "<<s.empty()<<endl;
    cout<<"Stack size: "<<s.size()<<endl;
    cout<<"Stack is full: "<<s.isFull()<<endl;
    cout<<"Pushing elements into stack: "<<endl;
}
