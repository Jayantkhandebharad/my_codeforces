#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  map<int,int> mp;
  for(int i=1;i<10;i++){
    mp[i]=4;
  }
  mp[10]=16;
  mp[11]=4;
  if(n==20){
    cout<<15<<endl;
    return 0;
  }
  cout<<mp[n-10]<<endl;
  return 0;
}