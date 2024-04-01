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

    if (n - 1 - 1 <= 26) {
        cout << "aa" << char(int('a') - 1 + (n - 1 - 1)) << "\n";
    }
    else if (n - 1 <= 52) {
        cout << 'a' << char(int('a') - 1 + (n - 1 - 26)) << 'z' << "\n";
    }
    else {
        cout << char(int('a') - 1 + (n - 52)) << "zz" << "\n";
    }
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