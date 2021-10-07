#include<iostream>
using namespace std;

void find(string str){
    int n=0,e=0,w=0,s=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='E')
            e++;
        if(str[i]=='S')
            s++;
        if(str[i]=='W')
            w++;
        if(str[i]=='N')
            n++;
    }
    if(n==s&&e==w)
        cout<<"Returned Successfully"<<endl;
    else    
        cout<<"Not Returned Successfully"<<endl;
}
int main(){
    string str;
    cin>>str;
    find(str);
    return 0;
}