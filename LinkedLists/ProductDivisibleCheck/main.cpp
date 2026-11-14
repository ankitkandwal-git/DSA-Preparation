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

long long ProductDivisible(Node* head,int k){
    Node* temp = head;
    int sum = 1;
    while(temp!=NULL){
        if(temp->data%4==0){
            sum*=temp->data;
        }
        temp = temp->next;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the size of LL: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in LL: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int k;
    cout<<"Enter the k number: ";
    cin>>n;
    Node* head = arrayToLL(arr,n);
    ProductDivisible(head,k);
    printLL(head);
}