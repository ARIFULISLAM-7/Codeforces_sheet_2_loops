#include <bits/stdc++.h>
using namespace std;

int digitSum (int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int total = 0;
    for (int i = 1; i <= n; i++) {
        int ds = digitSum(i);
        if (ds >= a && ds <= b) {
            total += i;
        }
    }
    cout << total << endl;
    return 0;
}