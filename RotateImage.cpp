#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &m)
    {
        int i=0,j=m.size()-1;
        while(i<j)
        {
            swap(m[i],m[j]);
            i++;
            j--;
        }
}
void rotate(vector<vector<int>>& matrix) {
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=i;j<matrix[i].size();j++)
        {
            swap(matrix[i][j],matrix[j][i]); //transpose
        }
    }
    for(int i=0;i<matrix.size();i++)
    {
        reverse(matrix[i]); //reversed each row of the matrix
    }
}
int main()
{
    int n;
    cin>>n;

    vector<vector<int> > matrix;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int temp;
            cin>>temp;
            matrix[i][j]=temp;
        }
    }

    rotate(matrix);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}