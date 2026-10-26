#include<bits/stdc++.h>
using namespace std;

vector<int>dominant(vector<int>&arr,int n){
    int maxi = INT_MIN;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(arr[i]>=maxi){
            ans.push_back(arr[i]);
            maxi=arr[i];
        }
    }
    return ans;
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
    vector<int>result = dominant(arr, n);
    cout<<"Dominant elements: ";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}