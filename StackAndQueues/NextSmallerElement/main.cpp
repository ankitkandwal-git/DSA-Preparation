#include<bits/stdc++.h>
using namespace std;

vector<int>NSE(vector<int>&arr){
    int n = arr.size();
    stack<int>s;
    vector<int>ans(n,-1);
    for(int i=0;i<n;i++){
        while(!s.empty() && arr[i]<=s.top()){
            s.pop();
        }
        if(!s.empty()){
            ans[i]=s.top();
        }
        s.push(arr[i]);
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of arr: ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int>ans = NSE(arr);
    cout<<"Next Smaller Element: ";
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    return 0;

}