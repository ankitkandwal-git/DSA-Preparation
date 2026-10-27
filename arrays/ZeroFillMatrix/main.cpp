#include<bits/stdc++.h>
using namespace std;

void zeroFill(vector<vector<int>>&matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    int firstRow=-1,firstCol=-1;
    for(int j=0;j<n;j++){
        if(matrix[0][j]==0){
            firstRow=0;
        }
    }
    for(int i=0;i<m;i++){
        if(matrix[i][0]==0) firstCol=0;
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
    }
    if(firstRow==0){
        for(int j=0;j<n;j++){
            matrix[0][j]=0;
        }
    }
    if(firstCol==0){
        for(int i=0;i<m;i++){
            matrix[i][0]=0;
        }
    }
}
int main(){
    int m;
    cout<<"Enter the number of rows: ";
    cin>>m;
    int n;
    cout<<"Enter the number of columns: ";
    cin>>n;
    vector<vector<int>>matrix(m,vector<int>(n));
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    
    cout<<"The matrix after zero fill is: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    zeroFill(matrix);
}