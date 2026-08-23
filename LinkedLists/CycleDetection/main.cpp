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
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

bool detectCycleYesOrNo(Node* head){
    if(head==NULL || head->next==NULL) return false;
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast) return true;
    }
    return false;
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
    Node* head = arrayToLL(arr,n);
    printLL(head);
    if(detectCycleYesOrNo(head)){
        cout<<"Cycle detected in the linked list."<<endl;
    }else{
        cout<<"No cycle detected in the linked list."<<endl;
    }
    return 0;

}