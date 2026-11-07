
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
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

Node* removeDuplicates(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* dummy = new Node(-1);
    dummy->next = head;
    Node* prev = dummy;
    while(head!=NULL){
        if(head->next!=NULL && head->data == head->next->data){
            while(head->next!=NULL && head->data == head->next->data){
                head = head->next;
            }
            prev->next = head->next;
        }
        else head = head->next;
    }
    return dummy->next;
}

int main(){
    int n;
    cout<<"Enter the size of LL: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in LL: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head = arrayToLL(arr,n);;
    head = removeDuplicates(head);
    cout<<"\nThe LL after removing duplicates is: ";
    printLL(head);
}