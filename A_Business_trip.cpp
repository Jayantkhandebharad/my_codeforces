#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n;
  vector<int> a(12);
  for(int i=0;i<12;i++){
    cin>>a[i];
  }
  int sum = 0;
  if(n==0){
    cout<<0<<endl;
    return 0;
  }
  sort(a.begin(),a.end(),greater<int>());
  for(int i=0;i<12;i++)
  {
    sum += a[i];
    if( sum >=n){
      cout<<i+1<<endl;
      return 0;
    }
  }
  cout<<-1<<endl;
  return 0;
}