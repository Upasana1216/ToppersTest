#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
        priority_queue <int, vector<int>, greater<int> > MinHeap;
        for(int i=0;i<nums.size();i++)
        {
            MinHeap.push(nums[i]);
            if(MinHeap.size()>k)
            {
                MinHeap.pop();
            }
        }
        return MinHeap.top();
}

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> nums;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }

    cout<<findKthLargest(nums,k)<<endl;

    return 0;
}
