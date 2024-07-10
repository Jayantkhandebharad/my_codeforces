#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int m;
  cin>>m;
  vector<int> v(n);
  
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  map<int, int> mp;
  vector<int> dp(n);
  int cnt = 0;
  for(int i=n-1;i>=0;i--){
    if(mp.find(v[i])==mp.end()){
      cnt++;
      mp[v[i]] = 1;
    }
    dp[i] = cnt;
  }
  while(m--){
    int x;
    cin>>x;
    cout<<dp[x-1]<<endl;
  }
  return 0;
}