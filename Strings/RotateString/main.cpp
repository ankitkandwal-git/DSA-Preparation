#include<bits/stdc++.h>
using namespace std;

void LPS(string text,vector<int>&lps){
    int n = text.size();
    int i=0,j=1;
    lps[0]=0;
    while(i<n){
        if(text[i]==text[j]){
            lps[j] = i+1;
            i++;
            j++;
        }
        else{
            if(i==0){
                lps[j]=0;
                i++;
            }else{
                i=lps[i-1];
            }
        }
    }
}

int KMP(string text,string pattern){
    int m= text.size();
    int n  = pattern.size();
    int i=0,j=0;
    vector<int>lps(n,0);
    LPS(pattern,lps);
    while(i<m){
        if(text[i]==pattern[j]){
            i++,j++;
        }
        else{
            if(j!=0){
                j=lps[j-1];
            }else{
                i++;
            }
        }
        if(j==n) return i-j;
    }
    return -1;
}

int rotateString(string text,string pattern){
    if(text.size() != pattern.size()) return false;
    text=text+text;
    if(KMP(text,pattern)!=-1 ) return true;
    return false;
}
int main(){
    string  m;
    cout<<"Enter the text: ";
    cin>>m;
    string n;
    cout<<"Enter the pattern: ";
    cin>>n;
    cout<<rotateString(m,n);
    return 0;
}