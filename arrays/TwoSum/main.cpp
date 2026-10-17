#include<bits/stdc++.h>
using namespace std;

pair<int,int>twoSum(int arr[],int n, int k){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                return {arr[i],arr[j]};
            }
        }
    }
    return {-1,-1};
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the kth Element: ";
    cin>>k;
    pair<int, int> result = twoSum(arr,n,k);
    cout<<result.first<<" "<<result.second;
    return 0;
}