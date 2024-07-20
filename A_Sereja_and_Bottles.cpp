#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> aa(n);
  vector<int> bb(n);
  

  for(int i = 0; i < n; i++){
    int a, b;
    cin >> a >> b;
    aa[i] = a;
    bb[i] = b;
  }
  vector<int> visited(n, 0);
  int ans = 0;
  for(int i = 0; i < n; i++){
    for(int j=0;j<n;j++){
      if(visited[j]==1)continue;
      if(i==j)continue;
      if(bb[i]==aa[j]){
        visited[j]=1;
      
      }
    }
  
  }
  for(int i=0;i<n;i++){
    if(visited[i]==0)ans++;
  }
  cout<<ans<<endl;
  return 0;
}