#include<bits/stdc++.h>
using namespace std;  

int main(){

  int a;
  cin>>a;
  double sum = 0;
  for(int i = 0; i < a; i++){
    int b;
    cin>>b;
    sum += b;
  }
  cout << fixed << setprecision(12) << sum/a << endl;
}