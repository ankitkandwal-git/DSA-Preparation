#include<bits/stdc++.h>
using namespace std;

void nextPermutation(int arr[], int n){
    int j=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            j=i;
            break;
        }
    }
    if(j==-1){
        reverse(arr,arr+n);
        return;
    }
    int k;
    for(int i=n-1;i>j;i--){
        if(arr[i]>arr[j]){
            k=i;
            break;
        }
    }
    swap(arr[j],arr[k]);
    reverse(arr+j+1,arr+n);
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    nextPermutation(arr,n);
    cout<<"The next permutation of the array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}