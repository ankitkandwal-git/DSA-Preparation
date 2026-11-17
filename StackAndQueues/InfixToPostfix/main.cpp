#include<bits/stdc++.h>
using namespace std;

int priority(char ch){
    if(ch=='^') return 3;
    if(ch=='*' || ch=='/') return 2;
    if(ch=='+' || ch=='-') return 1;
    return -1;
}

string infixToPostfix(string s){
    stack<char>stk;
    string result="";
    for(char ch:s){
        if((ch>='0' && ch<='9')|| (ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
            result+=ch;
        }
        else if(ch=='(') stk.push(ch);
        else if(ch==')'){
            while(!stk.empty() && stk.top()!='('){
                result+=stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else{
            while(!stk.empty() && priority(ch)<=priority(stk.top())){
                result+=stk.top();
                stk.pop();
            }
            stk.push(ch);
        }
    }
    while(!stk.empty()){
        result+=stk.top();
        stk.pop();
    }
    return result;
}
int main(){
    string s;
    cin>>s;
    cout<<infixToPostfix(s);
    return 0;
}