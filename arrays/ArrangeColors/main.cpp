#include<bits/stdc++.h>
using namespace std;

void arrangeColors(int arr[], int n){
    int low=0;
    int mid=0;
    int high = n-1;
    while(low<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1) mid++;
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array (0s, 1s, and 2s only): ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arrangeColors(arr,n);
    cout<<"Array after arranging colors: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}