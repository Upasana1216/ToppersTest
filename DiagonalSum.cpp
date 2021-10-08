
#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int difference(int arr[][MAX], int n)
{
	int d1 = 0, d2 = 0;

	for (int i = 0; i < n; i++)
	{
		d1 += arr[i][i];
		d2 += arr[i][n-i-1];
	}
	return abs(d1 - d2);
}

int main()
{
	int n,m;
    cin>>n>>m;
    
    int arr[n][MAX];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
	

	cout << difference(arr, n);
	return 0;
}
