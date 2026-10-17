
#include<bits/stdc++.h>
using namespace std;

vector<int>twoSum(vector<int>arr, int target){
    int n = arr.size();
    int i=0;
    int j=n-1;
    while(i<j){
        int sum = arr[i]+arr[j];
        if(sum==target) return {i,j};
        else if(sum>target) j--;
        else i++;
    }
    return {-1,-1};
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
    int target;
    cout<<"Enter the target sum: ";
    cin>>target;
    vector<int>result = twoSum(arr,target);
    if(result[0]==-1 && result[1]==-1) cout<<"No pair found"<<endl;
    else cout<<"Pair found at indices: "<<result[0]<<" and "<<result[1]<<endl;
}