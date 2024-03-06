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

void solve() {
	ll n, x, y;
	cin >> n >> x >> y;

	map<pair<ll, ll>, ll>r;	//can use map with pairs
	ll count = 0;

	for (ll i = 0; i < n; i++) {
		ll a;
		cin >> a;

		count += r[{ (x - a%x) % x, a % y }];	
		//conbinatoric but in a clever way
		//(a-x)%x same as a%x, gotta save the counterpart, hence (x - a%x)%x
		r[{ a % x, a % y }]++;
		
	}

	cout << count << "\n";
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