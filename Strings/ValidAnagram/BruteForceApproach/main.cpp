#include<bits/stdc++.h>
using namespace std;

bool validAnagram(string s1,string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1.size() != s2.size()) return false;
    if(s1==s2) return true;
}

int main(){
    string n1;
    cout<<"Enter the string s1: ";
    cin>>n1;
    string n2;
    cout<<"Enter the string s2: ";
    cin>>n2;
    if(validAnagram(n1,n2)) cout<<"True";
    else cout<<"False";
    return 0;
}