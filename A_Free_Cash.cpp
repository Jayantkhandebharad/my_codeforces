#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  map<int,int> mp;
  int sum = 0;
  int mx = 0;
  for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    int x = a*60+b;
    mp[x]++;
    mx = max(mx,mp[x]);
  }
  cout<<mx<<endl;
  return 0;
}