#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if(i!=n/i){
                count++;
            }
        }
    }
    if(n==2) return true;
    else return false;
}
int main(){
    int n;
    cout<<"Enter the n prime num: ";
    cin>>n;
    cout<<checkPrime(n);
    return 0;
}