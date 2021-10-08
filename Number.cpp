#include<iostream>
using namespace std;

void printUnique(int l,int r){
    int count=0;
    
    for(int i=l;i<=r;i++){
        int num=i;
        bool visited[10]={false};
        while(num){

            if(visited[num%10])
                break;

            visited[num%10]=true;
            num=num/10;
        }
        if(num==0)
            count++;
    }
    cout<<count;
}
int main()
{
    int l,r;
    cin>>l>>r;

    printUnique(l,r);
    return 0;
}