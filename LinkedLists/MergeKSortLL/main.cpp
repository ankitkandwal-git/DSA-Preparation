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

Node* mergeKSortedLL(vector<Node*>&arr){
    priority_queue<pair<int,Node*>,vector<pair<int,Node*>>,greater<pair<int,Node*>>>pq;
    int m = arr.size();
    if(m==0) return NULL;
    if(m==1) return arr[0];
    Node* dummy = new Node(-1);
    Node* cur = dummy;
    for(int i=0;i<m;i++){
        if(arr[i]) pq.push({arr[i]->data,arr[i]});
    }
    while(!pq.empty()){
        auto x = pq.top();
        pq.pop();
        cur->next = x.second;
        cur = cur->next;
        if(x.second->next!=NULL) pq.push({x.second->next->data,x.second->next});
    }
    return dummy->next;
}

int main(){
    int n;
    cin >> n;
    
    vector<Node*> arr;
    
    for(int i = 0; i < n; i++) {
        int m;
        cin >> m;
        int arr1[m];
        for(int i = 0; i < m; i++){
            cin >> arr1[i];
        }
        Node* head = arrayToLL(arr1, m);
        arr.push_back(head);
    }
    
    Node* result = mergeKSortedLL(arr);
    printLL(result);
    return 0;
}