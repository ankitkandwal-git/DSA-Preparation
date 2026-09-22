#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node* array_to_LL(vector<int>arr){
    int n = arr.size();
    if(n==0) return NULL;
    Node* head = new Node(arr[0]);
    for(int i=1;i<n;i++){
        Node* temp = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* mergeTwoSortedLL(Node* head1, Node* head2){
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
    if(head1==NULL || head2==NULL) return NULL;
    vector<int>arr;
    while(head1!=NULL && head2!=NULL){
        Node* temp1 = head1;
        Node* temp2 = head2;
        if(temp1>temp2){
            arr.push_back()
        }
    }
}