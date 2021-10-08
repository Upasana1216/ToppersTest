
#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int mat[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>mat[i][j];
    }
	

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < m; j++)
				cout << mat[i][j] << " ";
		} else {
			for (int j = m - 1; j >= 0; j--)
				cout << mat[i][j] << " ";
		}
	}
	return 0;
}
