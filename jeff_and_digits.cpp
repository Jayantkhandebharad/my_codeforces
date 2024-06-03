#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int z = 0;
  int f=0;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x == 0){
      z++;
    }else{
      f++;
    }
  }
  if(z==0){
    cout<<-1<<endl;
    return 0;
  }
  if(f<9){
    cout<<0<<endl;
    return 0;
  }
  int ff = f/9;
  for(int i=0;i<ff;i++){
    for(int j=0;j<9;j++){
      cout<<5;
    }
  }
  for(int i=0;i<z;i++){
    cout<<0;
  }
  return 0;
}