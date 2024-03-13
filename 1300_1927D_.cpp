#include <iostream>
#include <string>
#include <set>
#include <map>
#define ll long long
using namespace std;

int dp[2000002] = { 0 };
int aa[2000002] = { 0 };
//misunderstood the problem!!

void solve() {
    int n, q;
    cin >> n;

    cin >> aa[1];
    for (int i = 2; i <= n; i++) {
        cin >> aa[i];

        if (aa[i] == aa[i - 1]) {  //dp here
            dp[i] = dp[i - 1];    //saves the smallest-closest different element indices
        }
        else {
            dp[i] = i - 1;
        }
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        if (dp[r] < l) {
            cout << -1 << " " << -1 << "\n";
        }
        else {
            cout << r << " " << dp[r] << "\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    dp[0] = 0;
    for (int i = 0; i < t; i++) {
        solve();
    }
}