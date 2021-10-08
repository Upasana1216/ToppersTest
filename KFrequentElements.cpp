#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        priority_queue<int, vector<int>, greater<int>> max_k;
        for(auto i : nums) ++counts[i];
        for(auto & i : counts) {
            max_k.push(i.second);
            // Size of the min heap is maintained at equal to or below k
            while(max_k.size() > k) max_k.pop();
        }
        vector<int> res;
        for(auto & i : counts) {
            if(i.second >= max_k.top()) res.push_back(i.first);
        }
        return res;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> nums;
    for(int i=0;i<n;i++)
        cin>>nums[i];

    vector<int> ans=topKFrequent(nums,k);
    return 0;
}