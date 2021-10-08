
#include <bits/stdc++.h>
using namespace std;

int assignHole(int mices[], int holes[],int n, int m)
{
	
	if (n != m)
		return -1;
	
	sort(mices, mices + n);
	sort(holes, holes + m);
	
	int max = 0;
	for(int i = 0; i < n; ++i)
	{
		if (max < abs(mices[i] - holes[i]))
			max = abs(mices[i] - holes[i]);
	}
	return max;
}

int main()
{
	
	int n;
    cin>>n;
    
    int mices[n];
    for(int i=0;i<n;i++)
        cin>>mices[i];

    int m;
    cin>>m;
    
    int holes[m];
    for(int i=0;i<m;i++)
        cin>>holes[i];

	int minTime = assignHole(mices, holes, n, m);

	cout << "The last mouse gets into the hole in time:"<< minTime << endl;

	return 0;
}

