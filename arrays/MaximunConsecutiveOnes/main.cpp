#include<bits/stdc++.h>
using namespace std;

int maximumConsecutiveOnes(int n, int arr[]) {
    int count = 0;
    int curr=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            if(count>curr){
                curr = count;
            }
        }
        else count = 0;
    }
    return curr;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in arrays: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = maximumConsecutiveOnes(n,arr);
    cout<<result<<endl;
    return 0;
}