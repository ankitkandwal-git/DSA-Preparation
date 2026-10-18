#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    unordered_map<char,int>mp;
    unordered_map<char,int>mp2;
    for(int i=0;i<s1.length();i++){
        mp[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++){
        mp2[s2[i]]++;
    }
    for(int i=0;i<s1.length(),s2.length();i++){
        if(mp[s1[i]] != mp2[s2[i]]){
            return false;
        }
    }
    return false;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(isAnagram(s1,s2)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}