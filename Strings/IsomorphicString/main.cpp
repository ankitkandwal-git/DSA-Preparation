#include<bits/stdc++.h>
using namespace std;

bool helper(string s,string t){
    if(s.length()!=t.length()) return false;
    map<char,char>m;
    for(int i=0;i<s.length();i++){
        if(m.find(s[i])==m.end()){
            m[s[i]] = t[i];
        }
        else if (m[s[i]] !=t[i]) return false;
    }
    return true;
}
bool isIsomorphic(string s, string t) {
    return helper(s,t) && helper(t,s);
}
int main(){
    string s,t;
    cin>>s>>t;
    if(helper(s,t) && helper(t,s)) cout<<"true";
    else cout<<"false";
}