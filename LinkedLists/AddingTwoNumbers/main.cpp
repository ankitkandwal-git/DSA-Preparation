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

Node* addTwoNumbers(Node* head1,Node* head2){
    if(head1==NULL && head2==NULL) return NULL;
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* ans = new Node(-1);
    Node* cur = ans;
    int carry=0;
    while(temp1!=NULL && temp2!=NULL){
        int sum=carry;
        if(temp1!=NULL){
            sum+=temp1->data;
        }
        if(temp2!=NULL){
            sum+=temp2->data;
        }
        cur->next = new Node(sum%10);
        carry = sum/10;
        if(temp1) temp1 = temp1->next;
        if(temp2) temp2=temp2->next;
        cur = cur->next;
        if(carry==1) cur->next = new Node(1);
    }
    return ans->next;
}
int main(){
    int m;
    cout<<"Enter size of first array: ";
    cin>>m;
    int n;
    cout<<"Enter size of second array: ";
    cin>>n;
    int arr[m];
    cout<<"Enter elements of first array: ";
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int arr2[n];
    cout<<"Enter elements of second array: ";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    Node* head1 = arrayToLL(arr,m);
    Node* head2 = arrayToLL(arr2,n);
    Node* ans = addTwoNumbers(head1,head2);
    printLL(ans);
}