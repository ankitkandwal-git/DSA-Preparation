#include<bits/stdc++.h>
using namespace std;


// Moore voting Algorithm

int majorityElement(int arr[],int n){
    int leader = arr[0];
    int count = 1;
    for(int i=1;i<n;i++){
        if(arr[i]==leader){
            count++;
        }
        else if(count==0){
            leader = arr[i];
            count=1;
        }
        else count--;
        return leader;  
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = majorityElement(arr,n);
    cout<<result;
    return 0;
}