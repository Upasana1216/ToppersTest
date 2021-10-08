#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());    //Sort all intervals in ASC order
        int count = 0;      //Count of number of intervals to be removed
        int n = intervals.size();   //No of intervals
        int left = 0;   //left interval
        int right = 1;  //right interval
        
        while(right<n)  //Unless all intervals are compared
        {
            if(intervals[left][1] <= intervals[right][0])   //Non-overlapping case
            {
                left = right;
                right+=1;
            }
            else if(intervals[left][1]<=intervals[right][1])    //Overlapping case-1 (Remove right interval)
            {
                count+=1;       //Delete right
                right+=1;
            }
            else if(intervals[left][1]>intervals[right][1])     //Overlapping case-2 (Remove left interval)
            {
                count+=1;
                left = right;
                right+=1;
            }
        }
        
        return count;
    }
int main(){
    int n;
    cin>>n;

    vector<vector<int> > intervals;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
            cin>>intervals[i][j];
    }

    cout<<eraseOverlapIntervals(intervals)<<endl;
    return 0;
}