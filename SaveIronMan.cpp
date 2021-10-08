#include<bits/stdc++.h>
using namespace std;

bool saveIronman(string ch);


int main()
{
    int t,b,c,d,e,f,g,h;
    cin>>t;
    char cc;
    cc = getchar();
    
    while(t--)
    {
        string ch;
        getline(cin,ch);
        
        if(saveIronman(ch)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        
    }
}
// } Driver Code Ends



bool saveIronman(string ch)
{
    string ans="";
    for(int i=0;i<ch.length();i++){
        
        if(ch[i]>='a'&&ch[i]<='z'){
            ans+=ch[i];
        }
        
        
        if(ch[i]>='A'&&ch[i]<='Z'){
            ans+=ch[i];
        }
        
        
        if(ch[i]>='0'&&ch[i]<='9'){
            ans+=ch[i];
        }
        
    }
    
    int n=ans.length();
    int i=0;
    int j=n-1;
    
    while(i<j){
        
        if(toupper(ans[i])!=toupper(ans[j])){
            return false;
        }
        
        i++;
        j--;
    }
    
    return true;
    
}
