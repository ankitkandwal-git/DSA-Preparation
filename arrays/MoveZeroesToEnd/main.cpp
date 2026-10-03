#include<bits/stdc++.h>
using namespace std;

void moveZeroesToEnd(int n,int arr[]){
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[i+1]);
        }
    }
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
    moveZeroesToEnd(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}