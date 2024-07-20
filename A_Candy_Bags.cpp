#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >>n;

  int right = n*n;
  int left = 1;
  vector<vector<int>> v(n+1,vector<int>(n));
  for(int i=1;i<=n;i++){
    for(int j=0;j<n/2;j++){
      cout<<left<<" ";
      cout<<right;
      if(j!=n-1){
        cout<<" ";
      }
      left++;
      right--;
    }
    cout<<endl;
  }

  return 0;
}