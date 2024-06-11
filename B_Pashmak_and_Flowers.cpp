#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    long long int a = v[n-1]-v[0];
    long long int b = 0;
    if(v[0]==v[n-1]){
        b = (n*(n-1))/2;
    }
    else{
        long long int c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(v[i]==v[0]) c1++;
            else break;
        }
        for(int i=n-1;i>=0;i--){
            if(v[i]==v[n-1]) c2++;
            else break;
        }
        b = c1*c2;
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}