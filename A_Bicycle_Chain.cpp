#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int m;
  cin>>m;

  vector<int> b(m);
  for(int i=0;i<m;i++){
    cin>>b[i];
  }

  int max_chain = 0;
  int count = 0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(b[j]%a[i]==0){
        if(b[j]/a[i]>max_chain){
          max_chain = b[j]/a[i];
          count = 1;
        }else if(b[j]/a[i]==max_chain){
          count++;
        }
      }
    }
  }

  cout<<count<<endl;
}