#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  vector<int> a(n,0);
  int sum = 0;
  int mn = INT_MAX;
  int ind = 0;
  if(n==m){
    cout<<1<<endl;
    return 0;
  }
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
    if(i+1>=m){
      if(sum<mn){
        mn = sum;
        ind = i-m+2;
      }
      sum-=a[i-m+1];
    }
  }
  cout<<ind<<endl;
}