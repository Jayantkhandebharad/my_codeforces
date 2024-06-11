#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a,c;
  cin>>a>>c;
  
  cout<<min(n-a,c+1)<<endl;
  return 0;
}