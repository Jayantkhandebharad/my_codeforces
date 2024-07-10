#include<bits/stdc++.h>

using namespace std;

int main(){
  vector<vector<char>> v(4, vector<char>(4));
  for(int i=0;i<=3;i++){
    for(int j=0;j<=3;j++){
      cin>>v[i][j];
    }
  }

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      int hash = 0;
      hash = v[i][j]=='#'?1:0+ v[i+1][j]=='#'?1:0+ '#'== v[i][j+1]?1:0+ '#'== v[i+1][j+1]?1:0;

      hash = v[i][j]=='#'?1:0; 
      hash += v[i+1][j]=='#'?1:0; 
      hash += '#'== v[i][j+1]?1:0;
      hash += '#'== v[i+1][j+1]?1:0;

      if(hash!=2){
        cout<<"YES"<<endl;
        return 0;
      } 
    }
  }
  cout<<"NO"<<endl;
  return 0;
}