#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  long long int s1,s2,e1,e2;
  cin>>s1>>s2>>e1>>e2;
  string s;
  cin>>s;
  int E = e1-s1;
  int W = s1-e1;
  int N = e2-s2;
  int S = s2-e2;
  
  for(int i=0;i<n;i++){
    if(s[i]=='E') E--;
    else if(s[i]=='W') W--;
    else if(s[i]=='N') N--;
    else S--;
    if(E<=0 && W<=0 && N<=0 && S<=0){
      cout<<i+1<<endl;
      return 0;
    }
  }
  
  cout<<-1<<endl;
  return 0;
}