#include<bits/stdc++.h>
using namespace std;


int main(){
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  vector<int> freq(26, 0);
  for(int i = 0; i < n; i++){
    freq[s[i] - 'A']++;
  }
  sort(freq.begin(), freq.end(), greater<int>());
  long long ans = 0;
  for(int i = 0; i < 26; i++){
    if(k >= freq[i]){
      ans += (long long)freq[i] * freq[i];
      k -= freq[i];
    }else{
      ans += (long long)k * k;
      break;
    }
  }
  cout << ans << endl;
}
