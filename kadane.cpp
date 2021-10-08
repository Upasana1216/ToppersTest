#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
       int max_sum=nums[0];
       int  max_end=0;
        for(int i=0;i<nums.size();i++)
        {
            max_end=max_end+nums[i];
            if(max_sum<max_end)
                max_sum=max_end;
            if(max_end<0)
                max_end=0;
            
        }
        return max_sum;
}

int main(){
    int n;
    cin>>n;

    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }

    cout<<maxSubArray(nums)<<endl;
    return 0;
}