#include<bits/stdc++.h>
using namespace std;

long long armstrong(int base,int exp){
    long long result = 1;
    for(int i=0;i<exp;i++){
        result*=base;
    }
    return result;
}
bool checkArmstrong(int n){
    if(n<0) return false;
    int temp = n;
    int k = 0;
    while(temp>0){
        k++;
        temp = temp/10;
    }
    long long sum = 0;
    temp = n;
    while(temp>0){
        int digit = temp%10;
        sum += armstrong(digit,k);
        temp = temp/10;
    }
    return sum == n;
}

int main(){
    int n;
    cout<<"enter the n number: ";
    cin>>n;
    if(checkArmstrong(n)){
        cout<<n<<" is an Armstrong number"<<endl;
    }else{
        cout<<n<<" is not an Armstrong number"<<endl;
    }
    return 0;
}