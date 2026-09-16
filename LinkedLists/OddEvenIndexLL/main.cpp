#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = nullptr;
    }
};

Node* arrayToLL(int arr[],int n){
    Node* head = new Node(arr[0]);
    Node* current = head;
    for(int i = 1; i < n; i++){
        current->next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}

void printLL(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

Node* oddEvenIndexLL(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* odd = head;
    Node* even = head->next;
    Node* evenhead = even;
    while(even != NULL && even->next != NULL){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenhead;
    return head;
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head = arrayToLL(arr,n);
    head = oddEvenIndexLL(head);
    printLL(head);
    cout<<"Rearranged linked list: ";
    printLL(head);
}