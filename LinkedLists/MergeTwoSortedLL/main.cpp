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

Node* array_to_LL(vector<int>arr){
    int n = arr.size();
    if(n==0) return NULL;
    Node* head = new Node(arr[0]);
    Node* tail = head;
    for(int i=1;i<n;i++){
        Node* temp = new Node(arr[i]);
        tail->next = temp;
        tail = temp;
    }
    return head;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* mergeTwoSortedLL(Node* head1, Node* head2){
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;

    Node dummy(0);
    Node* tail = &dummy;
    while(head1!=NULL && head2!=NULL){
        if(head1->data <= head2->data){
            tail->next = head1;
            head1 = head1->next;
        }
        else{
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
    }
    tail->next = (head1 != NULL) ? head1 : head2;
    return dummy.next;
}
int main(){
    int n;
    cout<<"Enter the size of first LL: ";
    cin>>n;
    int m;
    cout<<"Enther the size of the second linked list: ";
    cin>>m;
    vector<int> arr1(n);
    cout<<"Enter the elements of the first linked list: ";
    for(int i=0;i<n;i++) cin>>arr1[i];
    Node* head1 = array_to_LL(arr1);

    vector<int> arr2(m);
    cout<<"Enter the elements of the second linked list: ";
    for(int i=0;i<m;i++) cin>>arr2[i];
    Node* head2 = array_to_LL(arr2);

    Node* mergedHead = mergeTwoSortedLL(head1, head2);
    cout<<"Merged linked list: ";
    printLL(mergedHead);
}