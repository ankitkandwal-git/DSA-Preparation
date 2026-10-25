//You are given the head of a linked list.

// Remove every node which has a node with a greater value 
//anywhere to the right side of it.

// Return the head of the modified linked list.

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next = NULL;
    }
};

Node* arrayToLL(int arr[], int n){
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

Node* removeNodeGrtValue(Node* head){
    if(head==NULL) return NULL;
    Node* temp = head;
    stack<Node*>s;
    while(temp!=NULL){
        while(!s.empty() && s.top()->data < temp->data){
            s.pop();
        }
        s.push(temp);
        temp = temp->next;
    }
    Node* newhead= NULL;
    while(!s.empty()){
        Node* node = s.top();
        s.pop();
        node->next = newhead;
        newhead = node;
    }
    return newhead;
}
int main(){
    int n;
    cout<<"Enter the number of nodes in the linked list: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the linked list: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head = arrayToLL(arr, n);
    head = removeNodeGrtValue(head);
    printLL(head);
    return 0;
}