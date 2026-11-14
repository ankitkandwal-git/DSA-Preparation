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
    Node* temp  = head;
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

Node* middleLL(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* reverse(Node* head){
    Node* prev=NULL;
    Node* curr = head;
    Node* next=NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;  
    }
    return prev;
}

void reorderLL(Node* head){
    if(!head || !head->next) return;
    Node* mid = middleLL(head);
    Node* second = mid->next;
    mid->next = NULL;
    second = reverse(second);
    Node* first = head;
    while(second!=NULL){
        Node* temp1 = first->next;
        Node* temp2 = second->next;
        first->next = second;
        second->next = temp1;
        first = temp1;
        second = temp2;
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in the linked list: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the linked list: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head = arrayToLL(arr, n);
    // printLL(head);
    reorderLL(head);
    printLL(head);
    return 0;
}