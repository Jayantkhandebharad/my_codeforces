#include<vector>
#include<bits/stdc++.h>
using namespace std;





int main(){
  int n;
  cin>>n;
  map<int,int> map;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    map[x] = i;
  }
  int m;
  cin>>m;
  long long l=0,s=0;
  vector<int> b(m);
  for(int i=0;i<m;i++){
    cin>>b[i];
    l+=map[b[i]]+1;
    s+=n-map[b[i]];
  }
  cout<<l<<" "<<s<<endl;
  return 0;
}

