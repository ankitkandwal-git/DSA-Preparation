#include<bits/stdc++.h>
using namespace std;

int maxPair(vector<int>arr,int n){
    int maxSum=INT_MIN;
    int currSum=0;
    int i=0,j=1;
    for(int i=0;i<n;i++){
        currSum+=arr[i]+arr[j];
        if(currSum>maxSum) maxSum=currSum;
        if(currSum<0) currSum=0;
    }
    return maxSum;
}

int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxPair(arr,n);
    return 0;
}