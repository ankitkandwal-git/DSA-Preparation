// Find a string is Palindrome or not .

#include<bits/stdc++.h>
using namespace std;

bool isPalindorme(string s){
    int n = s.size();
    int left = 0;
    int right = n-1;
    while(left<right){
        if(s[left]!=s[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    if(isPalindorme(s)) cout<<"This sting is Palidrome ";
    else cout<<"This is not Palindrome";
    return 0;
}