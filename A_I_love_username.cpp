#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a;
  cin>>a;
  int min=a,max=a;
  int points = 0;
  for(int i=1;i<n;i++){
    cin>>a;
    if(a>max){
      max = a;
      points++;
    }
    if(a<min){
      min = a;
      points++;
    }
  }
  cout<<points<<endl;
  return 0;
}