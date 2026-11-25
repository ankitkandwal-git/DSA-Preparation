#include<bits/stdc++.h>
using namespace std;

int divisor(int num){
    int sum=1;
    for(int i=2;i*i<num;i++){
        if(num%i==0){
            sum+=i;
            if(i!=num/i) sum+=num/i;
        }
    }
    return sum;
}

bool perfectNumber(int num){
    if(num<=1) return false;
    return divisor(num)==num;
}
int main(){
    int n;
    cout<<"enter the n :";
    cin>>n;
    if(perfectNumber(n)) cout<<"Yes perfect Num";
    else cout<<"No perfect Num";
    return 0;
}