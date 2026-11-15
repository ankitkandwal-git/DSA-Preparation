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
    if(n==0) return NULL;
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1;i<n;i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

void printLL(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* reverseLL(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    while(curr!=NULL){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* removeNode(Node* head){
    if(!head || !head->next) return head;
    reverseLL(head);
    Node* temp = head;
    int maxNum = temp->data;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->next->data < maxNum){
            temp->next = temp->next->next;
        }
        else{
            temp = temp->next;
            maxNum = temp->data;
        }
    }
    return reverseLL(head);
}