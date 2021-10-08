#include <bits/stdc++.h>
using namespace std;

int celebrity(vector<vector<int>> &M, int n)
{

    stack<int> s;
    for (int i = 0; i < n; i++)
        s.push(i);
    while (s.size() >= 2)
    {
        int t1 = s.top();
        s.pop();
        int t2 = s.top();
        s.pop();
        if (M[t1][t2] == 1)
            s.push(t2);
        else
            s.push(t1);
    }
    int k = s.top();
    for (int i = 0; i < n; i++)
    {
        if (i != k)
        {
            if (M[i][k] == 0 || M[k][i] == 1)
                return -1;
        }
    }
    return k;
}

int main()
{

    int n;
    cin >> n;
    vector<vector<int>> M(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> M[i][j];
        }
    }

    cout << celebrity(M, n) << endl;

    return 0;
}