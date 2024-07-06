#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  vector<int> v(n),vv(n);
  for(int i=0;i<n*2;i++){
    if(i<n){
      v[i] = s[i]-'0';
    }else{
      vv[i-n] = s[i]-'0';
    }
  }
  sort(v.begin(),v.end());
  sort(vv.begin(),vv.end());
  bool more = false;
  bool less = false;
  for(int i=0;i<n;i++){
    if( v[i]>vv[i]){
      more = true;
    }
    if( v[i]<vv[i]){
      less = true;
    }
    if( v[i]==vv[i]){
      less = true;
      more = true;
    }
  }
  if((!more && less) || (more && !less)){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
}