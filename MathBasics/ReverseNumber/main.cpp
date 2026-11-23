#include<bits/stdc++.h>
using namespace std;

int reverseNum(int n){
    int last_digit;
    int x=0;
    while(n!=0){
        last_digit=n%10;
        x=x*10+last_digit;
        n = n/10;
    }
    return x;
}
int main(){
    int n;
    cout<<"Enter the nth num: ";
    cin>>n;
    cout<<reverseNum(n);
    return 0;
}