#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<pair<int, int>> a(n);
  int min=1e9,max=-1e9;
  for(int i = 0; i < n; i++)
  {
    cin >> a[i].first >> a[i].second;
    if(a[i].first<min)
      min=a[i].first;
    if(a[i].second>max)
      max=a[i].second;
  }
  for(int i = 0; i < n; i++)
  {
    if(a[i].first==min && a[i].second==max){
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;

}