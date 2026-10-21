#include<bits/stdc++.h>
using namespace std;

void calculateLPS(string patter,vector<int>&lps){
    int n = patter.length();
    int i=0;
    int j=1;
    lps[0] = 0;
    while(j<n){
        if(patter[i]==patter[j]){
            lps[j]=i+1;
            i++;
            j++;
        }
        else{
            if(i==0){
                lps[j]=0;
                j++;
            }else{
                i=lps[i-1];
            }
        }
    }
}

int KMP(string text,string pattern){
    int m=text.length();
    int n=pattern.length();
    vector<int>lps(n);
    int i=0,j=0;
    calculateLPS(pattern,lps);
    while(i<m){
        if(text[i]==pattern[j]){
            i++;
            j++;
        }
        else{
            if(j!=0){
                j=lps[j-1];
            }else{
                i++;
            }
        }
        if(j==n){
            return i-j;
        }
    }
    return -1;
}

int main(){
    string text,pattern;
    cin>>text>>pattern;
    int index=KMP(text,pattern);
    if(index==-1){
        cout<<"Pattern not found"<<endl;
    }else{
        cout<<"Pattern found at index: "<<index<<endl;
    }
    return 0;
}