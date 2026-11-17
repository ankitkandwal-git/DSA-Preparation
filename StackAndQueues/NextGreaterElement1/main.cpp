#include<bits/stdc++.h>
using namespace std;

vector<int>NGE(vector<int>&ans){
    int n = ans.size();
    vector<int>result;
    stack<int>stk;
    for(int i=n-1;i>=0;i==){
        while(!stk.empty() && ans[i]>=stk.top()){
            stk.pop();
        }
        if(!stk.empty()){
            result[i] = stk.top();
        }
        else result[i]==-1;
        stk.push(ans[i]);
    }
    return result;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>ans(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    vector<int>result = NGE(ans);
    cout<<"The next greater elements are: ";
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}