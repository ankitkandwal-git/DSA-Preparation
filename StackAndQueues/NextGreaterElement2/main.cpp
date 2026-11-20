#include<bits/stdc++.h>
using namespace std;


vector<int>NGE(vector<int>&arr){
    int n = arr.size();
    vector<int>ans(n);
    stack<int>stk;
    for(int i=2*n-1;i>=0;i--){
        while(!stk.empty() && stk.top()<=arr[i%n]){
            stk.pop();
        }
        if(!stk.empty() && i<n) ans[i] = stk.top();
        stk.push(arr[i%n]);
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of arr: ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int>ans = NGE(arr);
    cout<<"Next Greater Element: ";
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
}