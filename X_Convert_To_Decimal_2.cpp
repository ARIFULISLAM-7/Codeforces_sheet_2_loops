#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int ones = __builtin_popcountll(n);
        cout << (1ll << ones) - 1 << endl;
    }
    return 0;
}