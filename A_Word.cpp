#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin>>s;
  int n = s.size();
  int count = 0;
  string answer = "";
  for(int i=0;i<n;i++){
    if(s[i] >= 65 && s[i] <= 90){
      count++;
    }
  }
  if(count > n/2){
    for(int i=0;i<n;i++){
      if(s[i] >= 97 && s[i] <= 122){
        answer += (char)(s[i]-32);
      }
      else{
        answer += s[i];
      }
    }
  }
  else{
    for(int i=0;i<n;i++){
      if(s[i] >= 65 && s[i] <= 90){
        answer += (char)(s[i]+32);
      }
      else{
        answer += s[i];
      }
    }
  }
  cout<<answer<<endl;
}