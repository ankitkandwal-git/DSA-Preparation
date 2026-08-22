// Find the Middle Employee

// A company stores employee records as a linked list.

// HR wants the middle employee record for auditing.

// If there are two middle nodes, return the second one.
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
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

Node* middleEmployee(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* slow  = head;
    Node* fast = head;
    while(fast!=NULL && fast->next !=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main(){
    int n;
    cout<<"Enter the number of employees: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the employee IDs: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head = arrayToLL(arr.data(), n);
    Node* middle = middleEmployee(head);
    cout<<"The middle employee ID is: "<<middle->data<<endl;
    return 0;
}
