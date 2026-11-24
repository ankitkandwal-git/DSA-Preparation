#include<bits/stdc++.h>
using namespace std;

void printDigit(int n){
    int last_digit;
    while(n!=0){
        last_digit = n%10;
        n/=10;
        cout<<last_digit<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the n number: ";
    cin>>n;
    printDigit(n);
    return 0;
}