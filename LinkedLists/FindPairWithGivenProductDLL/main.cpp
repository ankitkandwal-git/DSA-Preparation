#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};


Node* arrayToLL(int arr[],int n){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1;i<n;i++){
        temp->next = new Node(arr[i]);
        temp->next->prev = temp;
        temp = temp->next;
    }
    return head;
}

void printLL(Node* head){
    while(head !=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* productPair(Node* head,int k){
    Node* left = head;
    Node* right = head;
    vector<pair<int<int<int,int>>ans;
    int count=0;
    while(right->next){
        right = right->next;
    }
    while(left->data < right->data){
        int x = left->data * right->data;
        if(x==k){
            ans.push_back({left->data,right->data});
        }
        else if(x>k){
            right = right->prev;
        }
        else left = left->next;
    }
    return count;
}