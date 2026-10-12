#include<bits/stdc++.h>
using namespace std;

vector<int>interSectionArray(vector<int>a1,vector<int>a2){
    vector<int>ans;
    int i=0,j=0;
    while(i<a1.size() && j<a2.size()){
        if(a1[i]==a2[j]){
            ans.push_back(a1[i]);
            i++;
            j++;
        }
        else if(a1[i]<a2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main(){
    int n1, n2;
    cout << "Enter the size of array1: ";
    cin >> n1;
    cout << "Enter the size of array2: ";
    cin >> n2;
    
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    
    cout << "Enter sorted elements of array1: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    
    cout << "Enter sorted elements of array2: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    
    vector<int> result = interSectionArray(arr1, arr2);
    
    cout << "Intersection of two arrays: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}