#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <queue>
#include <algorithm>
#include <set>

#define ll long long

using namespace std;

//warning - think simple solutions!!!
void solve() {
	ll a, b, l;
	cin >> a >> b >> l;

	set<ll>count; //set doesn't contain duplicate elements
	for (ll i = 1; i <= l; i = i * a) {
		for (ll j = i; j <= l; j = j * b) {
			if (l % j == 0) {
				count.insert(j);
			}
		}
	}

	cout << count.size() << "\n";
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