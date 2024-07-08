#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> a(n);
  bool flag = false;
  int t25=0,t50=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==25){
      t25++;
    }
    else if(a[i]==50){
      if(t25>0){
        t25--;
        t50++;
      }
      else{
        flag = true;
      }
    }
    else{
      if(t50>0 and t25>0){
        t50--;
        t25--;
      }
      else if(t25>=3){
        t25-=3;
      }
      else{
        flag = true;
      }
    }
  }
  if(flag){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
  }

}