#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  vector<int> a(n);
  int max = 0, maxIndex = 0;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a[i]=x/m+(x%m==0?0:1);
    if(a[i]>=max){
      max = a[i];
      maxIndex = i;
    }
  }
  cout<<maxIndex+1<<endl;
  return 0;
}