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

Node* sortLL(Node * head){
    if(head==NULL) return NULL;
    Node* prev_0=NULL;
    Node* prev_1=NULL;
    Node* prev_2=NULL;
    Node* first_0=NULL;
    Node* first_1=NULL;
    Node* first_2=NULL;
    Node* temp = head;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->data==0){
            if(prev_0==NULL){
                first_0=temp;
            }else{
                prev_0->next=temp;
            }
            prev_0=temp;
        }
        else if(temp->data==1){
            if(prev_1==NULL){
                first_1=temp;
            }else{
                prev_1->next=temp;
            }
            prev_1=temp;
        }
        else if(temp->data==2){
            if(prev_2==NULL){
                first_2=temp;
            }else{
                prev_2->next=temp;
            }
            prev_2=temp;
        }
        temp = temp->next;
    }
    if(prev_0!=NULL){
        if(first_1!=NULL){
            prev_0->next=first_1;
        }else{
            prev_0->next=first_2;
        }
    }
    if(prev_1!=NULL){
        prev_1->next=first_2;
    }
    if(prev_2!=NULL){
        prev_2->next=NULL;
    }
    if(first_0!=NULL) return first_0;
    if(first_1!=NULL) return first_1;
    return first_2;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the linked list: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements (0s, 1s, and 2s only): ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head = arrayToLL(arr, n);
    head = sortLL(head);
    printLL(head);
    return 0;
}