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

Node* arrayToLL(vector<int>arr,int n){
    if(n == 0) return nullptr;
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

Node* removeDuplicates(Node* head){
    if(head == nullptr) return nullptr;
    Node* temp = head;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            Node* duplicate = temp->next;
            temp->next = temp->next->next;
            delete duplicate;
        }
        else{
            temp = temp->next;
        }
    }
    return head;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the linked list: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head = arrayToLL(arr,n);
    head = removeDuplicates(head);
    cout<<"Linked list after removing duplicates: ";
    printLL(head);
    return 0;
}