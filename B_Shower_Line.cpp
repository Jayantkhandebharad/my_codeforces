#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<vector<int>> v(5,vector<int>(5));
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      cin>>v[i][j];
    }
  }
  vector<int> p = {0,1,2,3,4};
  long long int ans = 0;
  do{
    long long int sum = 0;
    vector<int> temp=p;
    while(temp.size()>1){
      for(int i=0;i<temp.size()-1;i+=2){
        sum+=v[temp[i]][temp[i+1]]+v[temp[i+1]][temp[i]];
      }
      temp.erase(temp.begin());

      ans = max(ans,sum);
    }
  }while(next_permutation(p.begin(),p.end()));
  cout<<ans<<endl;
}