#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int f0=0;
    int f1 = 1;
    vector<int> fibo;
    fibo.push_back(f0);
    fibo.push_back(f1);
    map<int, int> mm;
    mm[0]=1;
    mm[1]=1;

    for(int i=2;i<n;i++){
      int ff = fibo[i-1] + fibo[i-2];
      fibo.push_back(ff);
      mm[ff]=ff;
      if(ff > n){
        break;
      }
    }
    for(int i=0;i<fibo.size();i++){
      for(int j=0;j<fibo.size();j++){
        int xx = mm[n-(fibo[i] + fibo[j])];
        if(xx == 0){
            continue;
        }
        cout<<fibo[i]<<" "<<fibo[j]<<" "<<(n-(fibo[i] + fibo[j]))<<endl;
        return 0;
      }
    }

    cout<<"I'm too stupid to solve this problem"<<endl;
    return 0;
}