#include<bits/stdc++.h>

using namespace std;

int main(){
  vector<vector<int>> a(3,vector<int>(3,0));

  for(int i = 0; i<3;i++){
    for(int j = 0; j<3;j++){
      cin>>a[i][j];
    }
  }

  vector<vector<int>> b(3,vector<int>(3,1));
  for(int i=0;i<3;i++){
    for(int j = 0;j<3;j++){
      if(i>0){
        b[i][j] += a[i][j]%2;
        b[i-1][j] += a[i][j]%2;
        if(i<2){
          b[i+1][j] += a[i][j]%2;
        }
        if(j>0){
          b[i][j-1] += a[i][j]%2;
        }
        if(j<2){
          b[i][j+1] += a[i][j]%2;
        }
      }
      else if(i==0){
        b[i][j] += a[i][j]%2;
        if(i<2){
          b[i+1][j] += a[i][j]%2;
        }
        if(j>0){
          b[i][j-1] += a[i][j]%2;
        }
        if(j<2){
          b[i][j+1] += a[i][j]%2;
        }
      }
      else if(i==2){
        b[i][j] += a[i][j]%2;
        if(i>0){
          b[i-1][j] += a[i][j]%2;
        }
        if(j>0){
          b[i][j-1] += a[i][j]%2;
        }
        if(j<2){
          b[i][j+1] += a[i][j]%2;
        }
      }
    }
  }

  for(int i = 0; i<3;i++){
    for(int j = 0; j<3;j++){
      cout<<b[i][j]%2;
    }
    cout<<endl;
  }
}