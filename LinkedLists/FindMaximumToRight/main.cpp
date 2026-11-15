#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* arrayToLL(int arr[],int n){
    Node* head = new Node(arr[0]);
    for(int i=1;i<n;i++){
        head->next = new Node(arr[i]);
        head = head->next;
    }
    return head;
}

void printLL(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* findRight(Node* head){
    Node* temp = head;
    while(temp!=NULL &&temp->next!=NULL){
        if(temp->data<temp->next->data)
    }
}