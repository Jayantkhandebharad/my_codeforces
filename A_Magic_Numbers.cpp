#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  int n = s.size();
  string a = "144",b="14",c="1";
  int i = 0;
  while(i<n){
    if(s.substr(i,3)==a){
      i += 3;
    }else if(s.substr(i,2)==b){
      i += 2;
    }else if(s.substr(i,1)==c){
      i += 1;
    }else{
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;
}