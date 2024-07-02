#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;

  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  if(n==1){
    cout<<0<<endl;
    return 0;
  }
  int kth = v[k-1];
  int ans = 0;
  for(int i=k;i<n;i++){
    if(v[i]!=kth){
      cout<<-1<<endl;
      return 0;
    }
  }
  
  for(int i=0;i<n;i++){
    if(v[i]!=kth){
      ans = i+1;
    }
  }
  cout<<ans<<endl;
  return 0;
}