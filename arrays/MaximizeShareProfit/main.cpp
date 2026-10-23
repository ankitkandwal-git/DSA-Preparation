#include<bits/stdc++.h>
using namespace std;

int maxShareProfit(int arr[], int n){
    int maxProfit=0;
    int minimum = arr[0];
    int profit=0;
    for(int i=1;i<n;i++){
        profit =arr[i]-minimum;
        maxProfit = max(maxProfit,profit);
        minimum = min(minimum,arr[i]);
    }
    return maxProfit;
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
    cout<<maxShareProfit(arr,n);
    return 0;
}