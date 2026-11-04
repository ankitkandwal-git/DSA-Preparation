#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

Node* arrayToLL(int arr[], int n){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=0;i<n;i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

void printLL(Node* head){
    while(head!=NULL){
        cout<<head<<" ";
        head = head->next;
    }
}


Node* deleteAllOccur(Node* head, int val){
    Node* cur = head;
    Node* prev = NULL;
    Node* next;
    while(cur != NULL){
        if(cur->data==val){
            if(cur == head) head = cur->data;
        }
        prev->next = prev;
        next = cur->next;
        if(prev) prev->next = next;
        if(next) next->prev = prev;
        delete cur;
        cur = next;
    }
}