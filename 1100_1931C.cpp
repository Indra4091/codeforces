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

	vector<ll>check;
	for (ll r = 0; r < n; r++) {
		ll a;
		cin >> a;
		check.push_back(a);
	}

	ll first = check[0];
	ll last = check[n - 1];
	ll countF = 1;
	ll countL = 1;
	bool f = true;
	bool l = true;

	for (ll r = 1; r < n; r++) {
		if (f == true) {
			if (first == check[r]) {
				countF++;
			}
			else {
				f = false;
			}
		}

		if (l == true) {
			if (last == check[n - 1 - r]) {
				countL++;
			}
			else {
				l = false;
			}
		}
	}

	if (first == last && (countF + countL < n)) {
		cout << n - countF - countL << "\n";
	}
	else {
		cout << n - max(countF, countL) << "\n";
	}
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