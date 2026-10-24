#include<bits/stdc++.h>
using namespace std;

int longestSeq(int arr[], int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int count=0,ans=1;
    for(auto i:s){
        if(s.find(i-1)==s.end()){
            count=1;
            int next = i+1;
            while(s.find(next)!=s.end()){
                count++;
                next++;
            }
            ans = max(ans,count);
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<longestSeq(arr,n);
    return 0;
}