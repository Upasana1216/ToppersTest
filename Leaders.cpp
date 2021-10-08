#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    vector<long long int> v;
	    for(long long int i=0;i<n;i++)
	    {
	        long long int temp;
	        cin>>temp;
	        v.push_back(temp);
	    }
	    long long int m=INT_MIN;
	    vector<long long int> ans;
	    for(long long int i=n-1;i>=0;i--)
	    {
	        if(m<=v[i])
	        {
	            m=v[i];
	            ans.push_back(m);
	        }
	    }
	    reverse(ans.begin(),ans.end());
	    for(int i=0;i<ans.size();i++)
	        cout<<ans[i]<<" ";
	    cout<<endl;
	}
	return 0;
}