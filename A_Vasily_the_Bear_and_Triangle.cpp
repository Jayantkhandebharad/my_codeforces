#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  int sum = 0;
  if(n<0 or m<0){
    if(n>0){
      sum += -1*n;
    }
    else{
      sum += n;
    }
    if(m>0){
      sum += -1*m;
    }
    else{
      sum += m;
    }
    if(n<0 and m>0){
      cout<<sum<<" "<<0<<" "<<0<<" "<<-1*sum<<endl;
    }
    else if(n>0 and m<0){
      cout<<0<<" "<<sum<<" "<<-1*sum<<" "<<0<<endl;
    }
    else if(n<0 and m<0){
      cout<<sum<<" "<<0<<" "<<0<<" "<<sum<<endl;
    }
  }
  else{
    cout<<0<<" "<<m+n<<" "<<m+n<<" "<<0<<endl;
  }

}