#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> a(7);
  int sum = 0;
  for(int i=0;i<7;i++){
    cin>>a[i];
    sum += a[i];
  }
  n = n%sum;
  if(n==0){
    for(int i=6;i>=0;i--){
      if(a[i]>0){
        cout<<i+1<<endl;
        break;
      }
    }
  }else{
    while(n>0){
      for(int i=0;i<7;i++){
        n -= a[i];
        if(n<=0){
          cout<<i+1<<endl;
          break;
        }
      }
    }
  }
}