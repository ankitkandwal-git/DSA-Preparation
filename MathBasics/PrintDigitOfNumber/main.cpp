#include<bits/stdc++.h>
using namespace std;

void printDigit(int n){
    while(n!=0){
        int last_digit = n%10;
        n/=10;
        cout<<last_digit<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the n number: ";
    cin>>n;
    cout<<printDigit<<endl;
    return 0;
}