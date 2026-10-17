#include<bits/stdc++.H>
#include<unordered_map>
using namespace std;

int longestSubarrayWithSumK(int arr[], int n , int k){
    unordered_map<long long, int> firstIndex;
    long long prefixSum = 0;
    int length = 0;

    for(int i = 0; i < n; i++){
        prefixSum += arr[i];

        if(prefixSum == k){
            length = i + 1;
        }

        auto it = firstIndex.find(prefixSum - k);
        if(it != firstIndex.end()){
            length = max(length, i - it->second);
        }

        firstIndex.emplace(prefixSum, i);
    }

    return length;
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
    int k;
    cout<<"Enter the K Element: ";
    cin>>k;
    int result = longestSubarrayWithSumK(arr,n,k);
    cout<<result<<'\n';
    return 0;
}