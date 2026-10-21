#include<bits/stdc++.h>
using namespace std;

long long f(string s, int k){
    int n = s.size();
    long long ans=0,count=0;    
    int arr[26] = {0};
    int i=0,j=0;
    while(j<n){
        if(arr[s[j]-'a']==0) count++;
        arr[s[j]-'a']++;
        while(count==k){
            ans+=n-j;
            arr[s[i]-'a']--;
            if(arr[s[i]-'a']==0) count--;
            i++; 
        }
        j++;
    }
    return ans;
}

long long countSubstringsWithKDistinct(string s, int k){
    return f(s,k)-f(s,k-1);
}

int main(){
    string s;
    int k;
    cin>>s>>k;
    cout<<countSubstringsWithKDistinct(s,k)<<endl;
}