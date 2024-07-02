#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  long long sum = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a.begin(), a.end(), greater<int>());
  for(int i = 0; i < n; i++)
  {
    if(sum<=0){
      sum += a[i];
    }
    else{
      sum -= a[i];
    }
  }
  
  if(sum==0){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
  
}