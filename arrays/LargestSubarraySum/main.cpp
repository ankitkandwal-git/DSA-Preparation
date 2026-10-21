// Kadane Algorithm

#include<bits/stdc++.h>
using namespace std;

int largestSubarraySum(int arr[],int n){
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum>maxSum){
            maxSum=currSum;
        }
        if(currSum<0) currSum=0;
    }
    return maxSum;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The largest subarray sum is: "<<largestSubarraySum(arr,n)<<endl;
    return 0;
}