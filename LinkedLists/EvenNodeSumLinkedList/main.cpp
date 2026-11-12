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

int evenNodeSum(Node* head){
    int sum=0;
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data%2==0){
            sum+=temp->data; 
        }
        else temp = temp->next;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the size of LL: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in LL: ";
    for(int i=0;i<n;i++)cin>>arr[i];
    Node* head = arrayToLL(arr,n);
    cout<<"Sum of even value nodes: "<<evenNodeSum(head)<<endl;
}