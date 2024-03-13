#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#define ll long long

using namespace std;

map<int, int>check1;
map<int, int>check2;

void solve()
{
    check1.clear();
    check2.clear();
    int n, m, k;
    cin >> n >> m >> k;
    set<int>v;
    int nn = 0;
    int mm = 0;

    for (int r = 0; r < n; r++) {
        int a;
        cin >> a;

        if (a <= k && !check1[a]) {
            check1[a] = 1;
            v.insert(a);
            nn++;
        }
    }

    for (int r = 0; r < m; r++) {
        int a;
        cin >> a;

        if (a <= k && !check2[a]) {
            check2[a] = 1;
            v.insert(a);
            mm++;
        }
    }

    if (mm >= k / 2 && nn >= k / 2 && v.size() == k) {
        cout << "YES" << "\n";
        return;
    }
    cout << "NO" << "\n";
    return;
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