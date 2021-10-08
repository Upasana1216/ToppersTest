#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
        int col=1;
        
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0]==0)
                    col=0;
            for(int j=1;j<matrix[0].size();j++){
                
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
                    
            }
        }
        
        for(int i=matrix.size()-1;i>=0;i--){
            
            for(int j=matrix[0].size()-1;j>=1;j--){
                if(matrix[i][0]==0||matrix[0][j]==0){
                        matrix[i][j]=0;
                }
            }
            if(col==0)
                matrix[i][0]=0;
        }
        
        
    }
int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int> > mat;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>mat[i][j];
    }
    setZeroes(mat);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}