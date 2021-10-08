
#include<bits/stdc++.h>
using namespace std;

int getMaxArea(vector<int> &heights)
{
	
	int n = heights.size(); 
        stack<int> st; 
        int leftSmall[n], rightSmall[n];
        //left array
        for(int i = 0;i<n;i++) {
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop(); 
            }
            
            if(st.empty()) leftSmall[i] = 0; 
            else leftSmall[i] = st.top() + 1; 
            st.push(i); 
        }
        
         //right array
        while(!st.empty()) st.pop(); 
        
        for(int i = n-1;i>=0;i--) {
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop(); 
            }
            
            if(st.empty()) rightSmall[i] = n-1; 
            else rightSmall[i] = st.top() - 1;
            
            st.push(i); 
        }
        
        int maxA = 0; 
        for(int i = 0;i<n;i++) {
            maxA = max(maxA, heights[i] * (rightSmall[i] - leftSmall[i] + 1));
        }
        return maxA; 
}


int main()
{
	int n;
    cin>>n;

    vector<int> hist;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        hist.push_back(temp);
    }
	cout << "Maximum area is " << getMaxArea(hist);
	return 0;
}
