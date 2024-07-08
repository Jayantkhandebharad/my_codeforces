#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  vector<pair<int,int>> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i].first;
    cin>>a[i].second;
  }
  sort(a.begin(),a.end(),[](pair<int,int> a,pair<int,int> b){
    if(a.first==b.first)
      return a.second<b.second;
    return a.first>b.first;
  });
  int p = a[k-1].first;
  int q = a[k-1].second;
  int ans = 0;
  int x = k-1;
  while(x<n && a[x].first==p && a[x].second==q){
    ans++;
    x++;
  }
  x=k-2;
  while(x>=0 && a[x].first==p && a[x].second==q){
    ans++;
    x--;
  }
  cout<<ans<<endl;
  return 0;
}