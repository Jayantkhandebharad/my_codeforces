#include<bits/stdc++.h>
using namespace std;

int recusrive_soln(long int n, long int a, long int b, long int c, vector<long int> &dp){
    if(n == 0){
        return 0;
    }
    if(n < 0){
        return INT_MIN;
    }

    if(dp[n]!=-1){
        return dp[n];
    }
    int ans = 0;
    
    ans = recusrive_soln(n-a, a, b, c,dp);
    ans = max(ans,recusrive_soln(n-b, a, b, c,dp));
    ans = max(ans,recusrive_soln(n-c, a, b, c,dp));
    if(n>0){
      return dp[n] = ans+1;
    }
    
}
int main(){
    long int n, a, b, c;
    cin>>n>>a>>b>>c;
    vector<long int> x = {a, b, c};
    sort(x.begin(), x.end());
    a = x[0];
    b = x[1];
    c = x[2];
    vector<long int> dp(n+1, -1);
    int ans = recusrive_soln(n, a, b, c, dp);
    cout<<ans<<endl;
    return 0;
}