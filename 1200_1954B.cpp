#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#define ll long long

using namespace std;


void solve() {
    int n;
    cin >> n;

    int odd;
    cin >> odd;

    int m1 = -1;
    int m2 = -1;
    int m = 300001;

    for (int r = 1; r < n; r++) {
        int a;
        cin >> a;
        if (a != odd && m1 == -1) {
            m1 = r;
            if (m1 < m) {
                m = m1;
            }
            if (n - r - 1 < m) {
                m = n - r - 1;
            }
        }
        else if (a != odd && m1 != -1) {
            m2 = r;
            if (m2 - m1 - 1 < m) {
                m = m2 - m1 - 1;
            }

            m1 = m2;
            m2 = -1;

            if (n - r - 1 < m) {
                m = n - r - 1;
            }
        }
    }

    if (m == 300001) {
        cout << -1 << "\n";
        return;
    }
    cout << m << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for (int r = 0; r < t; r++) {
        solve();
    }
}