#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void minimumBribes(vector<int> v) {
    int N = v.size();
    auto cnt = 0;
    for (auto i=N-1; i>=0; --i)
    {
        auto expected = i + 1;           
        if (v[i] != expected)
        {
            if (i >= 1 && expected == v[i-1])
            {
                ++cnt;
                swap(v[i], v[i-1]);
            }
            else if (i >= 2 && expected == v[i-2])
            {
                cnt += 2;
                v[i-2] = v[i-1];
                v[i-1] = v[i];
                v[i] = i;
            }
            else
            {
                cout << "Too chaotic\n";
                return;
            }
        }
    }
    cout << cnt << "\n";
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    minimumBribes(v);
}