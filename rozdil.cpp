#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    if(a[0].first == a[1].first){
        cout << "Still Rozdil";
    }else{
        cout << a[0].second + 1;
    }
    return 0;
}