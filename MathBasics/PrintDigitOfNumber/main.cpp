#include<bits/stdc++.h>
using namespace std;

void printDigit(int n){
    while(n!=0){
        int last_digit = n%10;
        n=n/10;
        cout<<last_digit<<endl;
    }
}