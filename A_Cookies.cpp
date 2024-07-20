#include<bits/stdc++.h>
using namespace std;

int main(){
  int a;
  cin>>a;
  vector<int> v;
  int sum = 0;
  for(int i=0;i<a;i++){
    int x;
    cin>>x;
    v.push_back(x);
    sum += x;
  }
  int ans = 0;
  for(int i=0;i<a;i++){
    if((sum-v[i])%2==0){
      ans++;
    }
  }
  cout<<ans<<endl;
  return 0;
}