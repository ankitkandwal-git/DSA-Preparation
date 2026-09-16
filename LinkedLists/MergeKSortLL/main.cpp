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

Node* arrayToLL(int arr[], int n){
    if(n == 0) return nullptr;
    Node* head = new Node(arr[0]);
    Node* curr = head;
    for(int i = 1; i < n; i++){
        curr->next = new Node(arr[i]);
        curr = curr->next;
    }
    return head;
}

void printLL(Node* head){
    Node* curr = head;
    while(curr != nullptr){
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

Node* mergeKSortedLL(vector<Node*>&arr[],int m,int n){
    
}