#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int lcm(int a, int b, int c) {
    return lcm(a, lcm(b, c));
}

int lcm(int a, int b, int c, int d) {
    return lcm(a, lcm(b, c, d));
}

int main(){
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    if (k == 1 || l == 1 || m == 1 || n == 1) {
        cout << d << endl;
        return 0;
    }

    int damaged = 0;
    damaged += d / k + d / l + d / m + d / n;
    damaged -= d / lcm(k, l) + d / lcm(l, m) + d / lcm(m, n) + d / lcm(n, k) + d / lcm(k, m) + d / lcm(l, n);
    damaged += d / lcm(k, l, m) + d / lcm(l, m, n) + d / lcm(k, n, m) + d / lcm(l, k, n);
    damaged -= d / lcm(k, l, m, n);

    cout << damaged << endl;
    return 0;
}
