#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int n,int k){
    int x=0;
    int last_digit;
    while(n!=0){
        last_digit = n%10;
        n = n/10;
        x = x*10+last_digit;
    }
    if(x==k) return true;
    else return false;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int k;
    cout<<"Enter the k num: ";
    cin>>k;
    cout<<checkPalindrome(n,k);
    return 0;
}