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

int main(){
    int m;
    cout<<"Enter the row size: ";
    cin>>m;
    int n;
    cout<<"Enter the col size: ";
    cin>>n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    vector<vector<int>> rotated = gridRotation(matrix);
    for (const auto& row : rotated) {
        for (int value : row) {
            cout << value << ' ';
        }
        cout << '\n';
    }
    return 0;
}