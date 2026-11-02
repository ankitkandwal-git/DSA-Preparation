// Leet code-1886

// Given two n x n binary matrices mat and target, 
// return true if it is possible to make mat equal to target by 
// rotating mat in 90-degree increments, or false otherwise.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>gridRotation(vector<vector<int>>&matrix){
    int m = matrix.size();
    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<m;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
    return matrix;
}

bool findRotate(vector<vector<int>>&matrix,vector<vector<int>>&target){
    gridRotation(matrix);
    for(int i=0;i<4;i++){
        if(matrix==target) return true;
        gridRotation(matrix);
    }
    return false;
}

int main(){
    int m;
    cout<<"Enter the size of row: ";
    cin>>m;
    int n;
    cout<<"Enter the size of col: ";
    cin>>n;
    vector<vector<int>>matrix(m,vector<int>(n));
    cout<<"Enter the elements of matrix: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    vector<vector<int>>target(m,vector<int>(n));
    cout<<"Enter the elements of target matrix: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>target[i][j];
        }
    }
    cout<<findRotate(matrix,target);
    
}