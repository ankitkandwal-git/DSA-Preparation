#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>&arr, int n){
    vector<int>ans(n);
    int pos = 0;
    int neg= 1;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans[pos] = arr[i];
            pos+=2;
        }
        else{
            ans[neg] = arr[i];
            neg+=2;
        }
    }
    return ans; 
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result = rearrangeArray(arr, n);
    for(int value : result){
        cout << value << " ";
    }
    return 0;
}