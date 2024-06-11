#include<bits/stdc++.h>
using namespace std;

int main(){
  int k;
  cin>>k;
  string s;
  cin>>s;
  map<char,int> mp;
  for(int i=0;i<s.size();i++){
    mp[s[i]]++;
  }
  for(auto it:mp){
    if(it.second%k!=0){
      cout<<-1<<endl;
      return 0;
    }
  }
  string ans = "";
  for(auto it:mp){
    for(int i=0;i<it.second/k;i++){
      ans += it.first;
    }
  }
  for(int i=0;i<k;i++){
    cout<<ans;
  }
  cout<<endl;
}