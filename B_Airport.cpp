#include<bits/stdc++.h>
using namespace std;


int main(){
  long long n,m;
  cin>>n>>m;
  vector<long long> plane(m);
  for(long long i=0;i<m;i++){
    cin>>plane[i];
  }
  long long max=0;
  long long min=0;
  priority_queue<long long> pq;
  priority_queue<long long,vector<long long>,greater<long long>> pq2;
  long long people = n;
  for(long long i=0;i<m;i++){
    pq.push(plane[i]);
    pq2.push(plane[i]);
  }
  while(people--){
    long long temp = pq.top();
    pq.pop();
    max+=temp;
    if(temp>1){
      pq.push(temp-1);
    }
    temp=pq2.top();
    pq2.pop();
    min+=temp;
    if(temp>1){
      pq2.push(temp-1);
    }
  }
  cout<<max<<" "<<min<<endl;
  return 0;
}