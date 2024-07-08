#include<bits/stdc++.h>
using namespace std;

int main(){
  ifstream inputFile("input.txt");
  ofstream outputFile("output.txt");
  int n;
  inputFile>>n;
  n = n*2;
  int x;
  map<int,int> mp;
  vector<pair<int,int>> v; 
  for(int i=0;i<n;i++){
    inputFile>>x;
    if(mp.find(x)==mp.end()){
      mp[x] = i+1;
    }
    else{
      
      v.push_back({mp[x],i+1});
      mp.erase(x);
    }
  }
  if(v.size()==0 or mp.size()!=0){
    outputFile<<"-1"<<endl;
  }
  else{
    for(auto i:v){
      outputFile<<i.first<<" "<<i.second<<endl;
    }
  }
  inputFile.close();
    outputFile.close();
  return 0;
}