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

Node* gthNode(Node* cur , int k){
    int count=0;
    while(cur && count!=k-1){
        count++;
        cur = cur->next;
    }
    if(count==k-1){
        return cur;
    }
    else return NULL;
}

Node* reverse(Node* head){
    Node* temp = head;
    Node* next;
    Node* prev=NULL;
    while(temp!=NULL){
        next = temp->next;
        temp->next = prev;
        temp = next;
    }
    return prev;
}

Node* reverseKGroup(Node* head,int k){
    Node* cur = head;
    Node* prev = NULL;
    Node* next;
    while(cur){
        Node* kth = gthNode(cur,k);
        if(kth){
            Node* next = kth->next;
            kth->next = NULL;
            reverse(cur);
            if(cur==head) head=kth;
            else prev->next = kth;
        }
        else{
            if(prev){
                prev->next = cur;
                break;
            }
            prev=cur;
            cur=next;
        }
    }
    return head;
}