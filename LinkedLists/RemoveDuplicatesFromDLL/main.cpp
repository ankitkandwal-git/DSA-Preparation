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


Node* arrayToLL(int arr[],int n){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1;i<n;i++){
        temp->next = new Node(arr[i]);
        temp->next->prev = temp;
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


Node* removeDuplicates(Node* head){
    if(head==NULL) return NULL;
    Node* prev = NULL;
    Node* cur = head;
    Node* next;
    while(cur!=NULL && cur->next!=NULL){
        prev = cur->prev;
        next = cur->next;
        if(cur->data==prev->data){
            prev->next = next;
            if(next) next->prev = prev;
            delete cur;
        }
        cur = cur->next;
    }
    return head;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head = arrayToLL(arr,n);
    head = removeDuplicates(head);
    cout<<"\nThe linked list after removing duplicates is: ";
    printLL(head);
}