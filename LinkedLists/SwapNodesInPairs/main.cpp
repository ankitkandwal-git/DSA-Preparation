#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

Node* arrayToLL(int arr[], int n){
    if (n <= 0) return NULL;

    Node* head = new Node(arr[0]);
    Node* curr = head;
    for (int i = 1; i < n; i++) {
        curr->next = new Node(arr[i]);
        curr = curr->next;
    }
    return head;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return;
}

Node* swapPairs(Node* head){
    if(head==NULL && head->next==NULL) return NULL;
    Node* dummy = new Node(-1);
    dummy->next = head;
    Node* prev = dummy;
    while(prev->next!=NULL && prev->next->next!=NULL){
        Node* first = prev->next;
        Node* second = first->next;
        first->next = second->next;
        second->next = first;
        prev->next = second;
        prev = first;
    }
    return dummy->next;
}

int main(){
    int n;
    cout<<"Enter the size of LL: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of LL: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    Node* head = arrayToLL(arr, n);
    head = swapPairs(head);
    printLL(head);
}