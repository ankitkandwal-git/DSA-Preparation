#include<bits/stdc++.h>
using namespace std;

int countEvenOdd(int arr[],int n){
    int even = 0;
    int odd = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) even++;
        else odd++;
    }
    return even;
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
    int evenCount = countEvenOdd(arr,n);
    int oddCount = n - evenCount;
    cout<<"Number of even elements: "<<evenCount<<endl;
    cout<<"Number of odd elements: "<<oddCount<<endl;
}