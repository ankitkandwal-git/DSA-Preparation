// Example : 12,345,6,7,3456
// 12- has even digits
// 345- has odd digits
// 6- has even digits
// 7- has odd digits
// 3456- has even digits

#include<bits/stdc++.h>
using namespace std;

int countEvenDigitNumbers(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        string s = to_string(arr[i]);
        if(s.length()%2==0) count++;
    }
    return count;
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
    int evenDigitCount = countEvenDigitNumbers(arr,n);
    cout<<"Number of elements with even digits: "<<evenDigitCount<<endl;
}