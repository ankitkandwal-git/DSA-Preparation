#include<bits/stdc++.h>
using namespace std;

int secondLargestNumber(int n,int arr[]){
    int largest = -1;
    int secondLargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(secondLargest<arr[i] && arr[i]!=largest){
            secondLargest=arr[i];
        }
    }
    return secondLargest;
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
    cout<<secondLargestNumber(n,arr);
    return 0;
}