#include<bits/stdc++.h>
using namespace std;

int countSubarray(int arr[], int n,int target){
    int count=0,sum=0;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==target){
            count++;
        }
        count+=m[sum-target];
        m[sum]++;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target sum: ";
    cin>>target;
    int result=countSubarray(arr,n,target);
    return 0;
}