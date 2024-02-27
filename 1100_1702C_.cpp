#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <queue>
#include <algorithm>
#include <set>
#include <map>

#define ll long long

using namespace std;

map<ll, ll>start;
map<ll, ll>finish;

void solve() {
	start.clear();
	finish.clear(); //clean your map

	ll n, k; //train stations and number of queries
	cin >> n >> k;

	for (ll train = 1; train <= n; train++) { //must not assign 0 as a value; default map value is 0; hence starting from 1
		ll u;
		cin >> u;

		if (!start[u]) {
			start[u] = train;
		}
		finish[u] = train;
	}

	for (ll query = 0; query < k; query++) {
		ll a, b;
		cin >> a >> b;

		if (start[a] && finish[b] && (start[a] <= finish[b])) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
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