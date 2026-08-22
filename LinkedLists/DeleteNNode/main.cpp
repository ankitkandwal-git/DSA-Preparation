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

Node* arrayTOLL(int arr[],int n){
    if(n<=0) return NULL;
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1;i<n;i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* deleteValue(Node* head,int value){
    if(head==NULL) return NULL;
    while(head!=NULL && head->data==value){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    Node* temp = head;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->next->data==value){
            Node* delNode = temp->next;
            temp->next = temp->next->next;
            delete delNode;
        }
        else{
            temp = temp->next;
        }
    }
    return head;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head = arrayTOLL(arr.data(),n);
    printLL(head);
    int value;
    cout<<"Enter the value to delete: ";
    cin>>value;
    Node* newHead = deleteValue(head,value);
    cout<<"After deleting "<<value<<" from the linked list: ";
    printLL(newHead);
    return 0;
}
