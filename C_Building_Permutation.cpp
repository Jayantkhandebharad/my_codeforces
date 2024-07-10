#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int n;
  cin>>n;
  vector<long long int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(), v.end());
  long long int cnt = 0;
  for(long int i=0;i<n;i++){
    cnt += abs(v[i]-(i+1));
  }
  cout<<cnt<<endl;
  return 0;
}