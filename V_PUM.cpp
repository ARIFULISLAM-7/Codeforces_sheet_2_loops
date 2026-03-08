#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int start = i * 4 + 1;
        cout << start << " " << start + 1 << " " << start + 2 << " " << "PUM" << endl;
    }
    return 0;
}