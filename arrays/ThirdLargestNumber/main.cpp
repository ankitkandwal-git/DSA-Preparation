#include<bits/stdc++.h>
using namespace std;

int thirdLargestNumber(int n,int arr[]){
    int largest = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            third = second;
            second = largest;
            largest = arr[i];
        }
        else if(arr[i]>second && arr[i]!=largest){
            third = second;
            second = arr[i];
        }
        else if(arr[i]>third && arr[i]!=second && arr[i]!=largest){
            third = arr[i];
        }
    }
    return (third==INT_MIN) ? largest : third;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<thirdLargestNumber(n,arr);
    return 0;
}