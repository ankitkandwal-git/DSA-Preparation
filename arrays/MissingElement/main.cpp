#include<bits/stdc++.h>
using namespace std;

int findMissingElement(vector<int>&arr,int n){
    int xor1 = 0;
    int xor2 = 0;
    for(int i=0;i<=n-2;i++){
        xor1 ^=arr[i];
    }
    for(int i=0;i<n;i++){
        xor2 ^= (i+1);
    }
    return xor1 ^ xor2;
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> arr(n-1);
    cout<<"Enter the elements: ";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    cout<<"The missing element is: "<<findMissingElement(arr,n)<<endl;
}