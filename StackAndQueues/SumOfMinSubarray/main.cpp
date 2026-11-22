#include<bits/stdc++.h>
using namespace std;

int sumOfMin(vector<int>&arr){
    int n = arr.size();
    int m = 1e9+7;
    stack<int>stk;
    vector<int>nse(n);
    for(int i=n-1;i>=0;i--){
        while(!stk.empty() && arr[stk.top()]>=arr[i]){
            stk.pop();
        }
        if(!stk.empty()){
            nse[i] =stk.top();
        }else{
            nse[i] = n;
        }
        stk.push(i);
    }
    vector<int>pse(n);
    while(!stk.empty()){
        stk.pop();
    }
    for(int i=0;i<n;i++){
        while(!stk.empty() && arr[stk.top()]>arr[i]){
            stk.pop();
        }
        if(!stk.empty()){
            pse[i] = stk.top();
        }else pse[i] = -1;
        stk.push(i);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        long long num = (nse[i]-1)*(i-pse[i]);
        sum = (sum+num*arr[i])%m;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = sumOfMin(arr);
    cout<<"The sum of minimum elements of all subarrays is: "<<result<<endl;
    return 0;
}