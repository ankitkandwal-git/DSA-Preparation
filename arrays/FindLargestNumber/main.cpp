#include<bits/stdc++.h>
using namespace std;

int largestNumber(int n, int arr[]){
    int maxi=arr[0];
    for(int i=1;i<n;i++){
        if(i>maxi){
            maxi = i;
        }
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largestNumber(n, arr)<<endl;

}