
#include<bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>>& mat) {
    if (mat.empty() || mat[0].empty()) return {};

    vector<int> ans;
    int m = mat.size();
    int n = mat[0].size();
    vector<int> row_delta = {0, 1, 0, -1};
    vector<int> col_delta = {1, 0, -1, 0};
    int pos = 0, row = 0, col = 0;

    while (ans.size() < m * n) {
        ans.push_back(mat[row][col]);
        mat[row][col] = 10000;

        int next_row = row + row_delta[pos];
        int next_col = col + col_delta[pos];

        if (next_row < 0 || next_row >= m || next_col < 0 || next_col >= n || mat[next_row][next_col] == 10000) {
            pos = (pos + 1) % 4;
            next_row = row + row_delta[pos];
            next_col = col + col_delta[pos];
        }

        row = next_row;
        col = next_col;
    }

    return ans;
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
    cout<<"The spiral order of the matrix is: ";
    vector<int> result = spiralMatrix(matrix);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
}