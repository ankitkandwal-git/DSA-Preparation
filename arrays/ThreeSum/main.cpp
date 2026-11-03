#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>threeSum(vector<int>&arr){
    int n = arr.size();
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            if(j!=i+1 && arr[j]==arr[j-1]){
                j++;
                continue;
            }
            int sum = arr[j]+arr[k];
            if(sum == -arr[i]){
                ans.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
            }
            else if(sum < -arr[i]){
                j++;
            }
            else{
                k--;
            }
        }
    }
    return ans;
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
    vector<vector<int>>result = threeSum(arr);
    cout<<"The triplets are: "<<endl;
    for(auto triplet : result){
        for(int num : triplet){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}