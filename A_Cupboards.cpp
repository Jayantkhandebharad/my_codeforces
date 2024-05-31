#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int lz=0,rz=0;
  for(int i=0;i<n;i++){
    int x,y;
    cin >> x>>y;
    if(x==0){
      lz++;
    }
    if(y==0){
      rz++;
    }
  }
  cout << min(lz,n-lz)+min(rz,n-rz) << endl;
  return 0;
}