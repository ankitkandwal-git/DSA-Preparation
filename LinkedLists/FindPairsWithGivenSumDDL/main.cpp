
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node* prev;
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};


Node* arrayToLL(const vector<int>& arr){
    if(arr.empty()) return NULL;

    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(size_t i=1;i<arr.size();i++){
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

    vector<pair<int,int>>pairWithGivenSum(Node* head , int x){
    Node* left = head;
    Node* right = head;
    vector<pair<int,int>>ans;
    if(head == NULL) return ans;

    while(right->next != NULL){
        right = right->next;
    }
    while(left != right && left->prev != right){
        int val = left->data + right->data;
        if(x==val){
            ans.push_back({left->data,right->data});
            left = left->next;
            right = right->prev;
        }
        else if(val>x){
            right = right->prev;
        }
        else left = left->next;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head = arrayToLL(arr);
    int x;
    cout<<"Enter the target sum : ";
    cin>>x;
    vector<pair<int,int>> result = pairWithGivenSum(head, x);
    cout<<"Pairs with given sum : ";
    for(auto p : result){
        cout<<"("<<p.first<<", "<<p.second<<") ";
    }
    return 0;
}