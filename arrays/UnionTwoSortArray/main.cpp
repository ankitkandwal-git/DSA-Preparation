#include<bits/stdc++.h>
using namespace std;

vector<int> unionOfTwoSorted(vector<int>arr1,vector<int>arr2){
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            if(ans.empty() || arr1[i]!=ans.back()){
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(ans.empty() || ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<arr1.size()){
            if(ans.empty() || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        }
         while(j<arr2.size()){
            if(ans.empty() || ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;
    }
    return ans;
}

int main(){
    int n1;
    cout<<"Enter the size of arr1: ";
    cin>>n1;
    int n2;
    cout<<"Enter the size of arr2: ";
    cin>>n2;
    vector<int> arr1(n1), arr2(n2);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    vector<int> result = unionOfTwoSorted(arr1, arr2);
    for(int value : result){
        cout<<value<<" ";
    }
}