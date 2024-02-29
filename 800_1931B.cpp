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
	vector<ll>container;
	ll sum = 0;
	ll n;

	cin >> n;
	for (ll r = 0; r < n; r++) {
		ll a;
		cin >> a;
		sum += a;
		container.push_back(a);
	}

	ll each = sum / n;
	for (ll r = 0; r < n - 1; r++) {
		if (container[r] < each) {
			cout << "NO" << "\n";
			return;
		}
		else {
			container[r + 1] += container[r] - each;
		}
	}
	cout << "YES" << "\n";
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