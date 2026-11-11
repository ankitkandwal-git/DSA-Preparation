#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* arrayToLL(int arr[],int n){
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

Node* mergeLL(Node* head1,Node* head2){
    Node* dummy = new Node(0);
    Node* prev = dummy;
    while(head1!=NULL && head2!=NULL){
        if(head1->data <= head2->data){
            prev->next = head1;
            prev = prev->next;
            head1 = head1->next;
        }
        else{
            prev = head2->next;
            prev = prev->next;
            head2 = head2->next;
        }
    }
    if(head1!=NULL) prev->next = head1;
    else prev->next = head2;
    return dummy.next;
}