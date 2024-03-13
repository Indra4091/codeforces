#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;

//vector.push_back resulted in runtime error, instead use array
void solve() {
    ll n, m, sum;
    ll zeros[200007] = { 0 };
    sum = 0;
    cin >> n >> m;

    for (ll i = 0; i < n; i++) {
        ll a;
        cin >> a;

        while (a % 10 == 0) {
            zeros[i]++;
            sum++;
            a = a / 10;
        }
        while (a >= 1) {
            sum++;
            a = a / 10;
        }
    }

    sort(zeros, zeros + n);
    for (ll i = n - 1; i >= 0; i -= 2) {
        sum -= zeros[i];
    }

    if (sum > m) {
        cout << "Sasha" << "\n";
    }
    else {
        cout << "Anna" << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}