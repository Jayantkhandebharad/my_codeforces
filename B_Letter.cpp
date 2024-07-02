#include<bits/stdc++.h>
using namespace std;

int main(){
  string s1, s2;
  getline(cin, s1);
  getline(cin, s2);
  
  vector<int> freq(256, 0);
  
  // Count frequencies of characters in s1 (heading)
  for(char c : s1) {
    if(c != ' ')
      freq[c]++;
  }

  // Check frequencies of characters needed in s2 (text)
  for(char c : s2) {
    if(c != ' ') {
      freq[c]--;
      if(freq[c] < 0) {
        cout << "NO" << endl;
        return 0;
      }
    }
  }
  
  cout << "YES" << endl;
  return 0;
}
