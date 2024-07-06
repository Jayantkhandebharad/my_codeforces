#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int i = 0;
    while (i < n && s[i] == '1') {
        i++;
    }
    if (i == n) {
        string ss = "";
        for (int j = 0; j < n-1; j++) {
            ss += s[j];
        }
        cout << ss << endl;
    } else {
        string ss="";
        for (int j = 0; j < n; j++) {
            if (j != i) {
                ss += s[j];
            }
        }
        cout << ss << endl;
    }
    return 0;
}