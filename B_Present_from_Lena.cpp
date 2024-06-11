#include<bits/stdc++.h>
using namespace std;

void drawspace(int n);
void drawSequence(int n);

int main(){
  int n;
  cin>>n;
  for(int i=0;i<=n;i++){
    drawspace(n-i);
    drawSequence(i);
    
  }
  for(int i=n-1;i>=0;i--){
    drawspace(n-i);
    drawSequence(i);
    
  }
}

void drawspace(int n){
  for(int i=0;i<n;i++){
    cout<<"  ";
  }
}
void drawSequence(int n){
  for(int i=0;i<n;i++){
    cout<<i<<" ";
  }
  for(int i=n;i>=0;i--){
    cout<<i;
    if(i>0) cout<<" ";
  }
  cout<<endl;
}