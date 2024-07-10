#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  vector<long long int> v(n);
  vector<long long int> v1(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
    v1[i] = v[i];
  }
  sort(v1.begin(), v1.end());
  for(int i=1;i<n;i++){
    v[i] += v[i-1];
    v1[i] += v1[i-1];
  }
  int m;
  cin>>m;
  while(m--){
    int type, l, r;
    cin>>type>>l>>r;
    if(type==1){
      long long int sum = 0;
      sum = v[r-1] - (l==1?0:v[l-2]);
      cout<<sum<<endl;
    }else{
      long long int sum = 0;
      sum = v1[r-1] - (l==1?0:v1[l-2]);
      cout<<sum<<endl;
    }
  }
  return 0;
}