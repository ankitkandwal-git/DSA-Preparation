// You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

// On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can sell and buy the stock multiple times on the same day, ensuring you never hold more than one share of the stock.

// Find and return the maximum profit you can achieve.

// Input: prices = [7,1,5,3,6,4]
// Output: 7
// Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
// Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
// Total profit is 4 + 3 = 7.

#include<bits/stdc++.h>
using namespace std;

int maxProfit(int arr[], int n){
    int maxProfit=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            maxProfit+=arr[i]-arr[i-1];
        }
    }
    return maxProfit;
}

int main(){
    int n;
    cout<<"Enter the size of arrays: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxProfit(arr,n);
    return 0;
}