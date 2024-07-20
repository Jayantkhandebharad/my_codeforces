#include<bits/stdc++.h>
using namespace std;


int main(){
  int n,m;
  cin>>n>>m;
  int sum = 0;
  for(int i=1;i<=n;i++){
    sum += i;
  }

  m = m%sum;
  if(m==0){
    cout<<0<<endl;
  }
  else{
    for(int i=1;i<=n;i++){
      if(m>=i){
        m -= i;
      }
      else{
        cout<<m<<endl;
        break;
      }
    }
  }
}