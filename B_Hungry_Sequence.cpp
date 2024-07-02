#include<bits/stdc++.h>
using namespace std;

vector<int> generatePrimes(int limit) {
    vector<bool> isPrime(limit + 1, true);
    vector<int> primes;

    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p <= limit; ++p) {
        if (isPrime[p]) {
            primes.push_back(p);
            for (int i = p*2; i <= limit; i += p) {
                isPrime[i] = false;
            }
        }
    }

    return primes;
}

int main(){
  int n;
  cin >> n;
  vector<int> primes = generatePrimes(1e7);
  for(int i = 0; i < n; i++)
  {
    cout<<primes[i];
    if(i!=n-1)
      cout<<" ";
  }
  cout<<endl;
  return 0;
}