
#include <bits/stdc++.h>
using namespace std;

int findMinimumChairs(string s)
{
	int count = 0;
	int i = 0;

	int mini = INT_MIN;

	while (i < s.length()) {

		if (s[i] == 'E')
			count++;
		else
			count--;

		mini = max(count, mini);

		i++;
	}

	return mini;
}


int main()
{
	string s;
    cin>>s;

	cout << findMinimumChairs(s);
    return 0;
}
