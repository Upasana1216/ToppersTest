#include <bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m)
{

	sort(a.begin(), a.end());
	long long int k = INT_MAX, ma = INT_MAX, j = 0;
	for (long long int i = m - 1; i < n; i++)
	{

		k = a[i] - a[j];
		j++;
		ma = min(k, ma);
	}

	return ma;
}

int main()
{

	long long n;
	cin >> n;
	vector<long long> a;
	long long x;
	for (long long i = 0; i < n; i++)
	{
		cin >> x;
		a.push_back(x);
	}

	long long m;
	cin >> m;

	cout << findMinDiff(a, n, m) << endl;

	return 0;
}