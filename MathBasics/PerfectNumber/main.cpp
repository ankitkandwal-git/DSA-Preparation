#include<bits/stdc++.h>
using namespace std;

int divisor(int num){
    int sum=1;
    for(int i=2;i*i<num;i++){
        if(n%i==0){
            sum+=i;
            if(i!=n/i) sum+=n/i;
        }
    }
    return sum;
}