// A company's employee IDs are stored in a sorted linked list.

// Because of a synchronization bug, duplicate IDs may exist.

// Remove all duplicate nodes so every employee ID appears only once.

#include<bits/stdc++.h>
using namespace std;

class Node{
public: // Error 1: Make members public for direct access
    int data;
    Node* next;
    Node(int val){
        this->data = val; // Error 2: Explicitly refer to member variable
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
    return head; // Error 3: Return the head of the linked list
};

void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout << endl; // Error 4: Add a newline for better output formatting
};

Node* removeDuplicates(Node* head){
    Node* temp = head;
    Node* temp1 = temp;
    Node* temp2 = temp->next;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data == temp2->data){
            temp1->next = temp2->next;
            temp2 = temp2->next;
        }
        else{
            temp1 = temp1->next;
        }
    }
    return temp;
}

int main(){
    int n;
    cout<<"Enter the size of LL: "; // Error 8: Removed extraneous 'p'
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of LL: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head = arrayToLL(arr.data(),n); // Error 9: Pass a pointer to the underlying array data
    printLL(head);
    head = removeDuplicates(head);
    cout<<"After removing duplicates: ";
    printLL(head);
    return 0;

}