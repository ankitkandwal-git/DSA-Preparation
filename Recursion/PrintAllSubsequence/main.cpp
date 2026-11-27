#include<bits/stdc++.h>
using namespace std;

void print_Sub(int i,int arr[],vector<int>&v,int n){
    if(i>=n){
        for(auto k:v) cout<<k<<" ";
        cout<<endl;
        return;
    }
    v.push_back(arr[i]);
    print_Sub(i,arr,v,n);

    v.pop_back();
    print_Sub(i,arr,v,n);

}

int main(){
    int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int> v;
        print_Sub(0,arr,v,n);
        return 0;
}