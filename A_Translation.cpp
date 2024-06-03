#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  string ss;
  cin>>ss;
  int n = s.size();
  int m = ss.size();
  int i = n-1;
  for(int j=0;j<m;j++){
    if(s[i]==ss[j]){
      i--;
    }
    else{
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;
}