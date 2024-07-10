#include<bits/stdc++.h>
using namespace std;

int count_diff(int x,int num_with_diff,vector<int> &a,int k){
  int flag = 0,cnt=0;
  for(int i=0;i<x;i++){
    cnt += abs(abs(a[i]-num_with_diff)/k);
  }
  return cnt;
}

int main(){
  int n,m,k;
  cin>>n>>m>>k;
  vector<int> a(n*m);
  int aa;
  int sum=0;
  for(int i=0;i<n*m;i++){
    cin>>aa;
    a[i] = aa;
    sum+=aa;
  }
  sort(a.begin(),a.end());
  int diff;
  int i=0;
  
  
  while(i<n*m){
    if((a[i]-a[0])%k!=0){
      cout<<-1<<endl;
      return 0;
    }
    
    i++;
  }
  
  int x = n*m;
  int cnt = INT_MAX;
  for(int i=0;i<x;i++){
    
      
      cnt = min(cnt,count_diff(x,a[i],a,k));
    
  }
  

  
  cout<<cnt<<endl;
  return 0;
  
}