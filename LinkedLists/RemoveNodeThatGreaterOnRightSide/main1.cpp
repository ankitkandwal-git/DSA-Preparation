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

Node* reverseNode(Node* head){
    Node* cur = head;
    Node* prev= NULL;
    while(cur!=NULL){
        Node* temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }
    return prev;
}

Node* removeNode(Node* head){
    if(!head || !head->next) return head;
    head = reverseNode(head);
    Node* temp = head;
    int maxValue = temp->data;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->next->data<maxValue){
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
        else{
            temp = temp->next;
            maxValue = temp->data;
        }
    }
    return reverseNode(head);
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
    head = removeNode(head);
    printLL(head);
    return 0;
}