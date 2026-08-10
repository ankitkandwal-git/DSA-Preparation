// Problem Statement

// A banking application stores every customer's transactions in chronological order using a singly linked list.

// Due to an audit request, you need to reverse the order of the transactions so the newest transaction appears first.

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* arrayToLL(int arr[],int n){
    Node* head = NULL;
    for(int i=0;i<n;i++){
        Node* temp = new Node(arr[i]);
        temp->next = head;
        head = temp;
    
    }
    return head;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
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

int main(){
   int n;
   cout<<"Enter the size of the LL: ";
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   Node* head = arrayToLL(arr.data(),n);
   cout<<"Original LL: ";
   printLL(head);
   head = reverseLL(head);
   cout<<"Reverse LL: ";
   printLL(head);
   return 0;
}