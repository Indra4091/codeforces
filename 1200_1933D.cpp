#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <queue>
#include <algorithm>
#include <set>

#define ll long long

using namespace std;

void solve() {
	ll n;
	cin >> n;
	vector<ll>v;

	for (ll i = 0; i < n; i++) {
		ll b;
		cin >> b;
		v.push_back(b);
	}

	sort(v.begin(), v.end());

	if (v[0] != v[1]) {
		cout << "YES\n";
		return;
	}

	for (ll i = 1; i < n; i++) {
		if (v[i] != v[0]) {
			ll g = v[i] % v[0];
			if (g < v[0] && g != 0) {
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	for (int test = 0; test < t; test++) {
		solve();
	}
}