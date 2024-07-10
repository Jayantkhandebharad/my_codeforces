#include<bits/stdc++.h>
using namespace std;

int rec(vector<int> &a,int i,int j,vector<vector<int>> &dp){
  
}

int main(){
  int n;
  cin>>n;
  vector<int> a(n);
  int sum = 0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
  }
  if(sum==n){
    cout<<n-1<<endl;
    return 0;
  }
  vector<vector<int>> dp(n+1,vector<int>(n+1,0));
  int mx = sum;
  int cnt = sum;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      if(a[j]==0){
        sum++;
        
      }
      else{
        sum--;
      }
      mx = max(mx,sum);
    }
    sum = cnt;
  }
  cout<<mx<<endl;
  return 0;
  }