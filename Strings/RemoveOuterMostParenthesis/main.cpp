#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s){
    int count=0;
    string ans;
    for(char c:s){
        if(c=='('){
            if(count>0)ans+=c;
            count++;
        }
        else{
            count--;
            if(count!=0)ans+=c;
        }
    }
    return ans;
}
int main(){
    string s;
    cout<<"Enter the string of parentheses: ";
    cin>>s;
    cout<<removeOuterParentheses(s);
}