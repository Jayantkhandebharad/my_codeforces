#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  int cnt = 0;
  for(int i=1;i<=n;i++){
    for(int j=i+1;i*i+j*j<=n*n;j++){
      if(int(sqrt(i*i+j*j))*int(sqrt(i*i+j*j))==i*i+j*j){
        cnt++;
      }
    }
  }
  cout<<cnt<<endl;
  return 0;
}