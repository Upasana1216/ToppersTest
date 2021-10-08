#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
  int cases;
  cin>>cases;
  while (cases--) {
    int B, W, X, Y, Z;
    cin>>B>>W>>X>>Y>>Z;
    int res = B * X + W * Y; //case 1
    res = min(res, B * X + W * (X + Z)); //case 2 //min(a,b); res= min(3,5)
    res = min(res, B * (Y + Z) + W * Y); //case 3
    cout<<res<<endl;
  }
  return 0;
}