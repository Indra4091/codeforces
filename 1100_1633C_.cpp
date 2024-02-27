#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <queue>
#include <algorithm>
#include <set>

#define ll int long long

using namespace std;

void solve() {
	ll hc, dc; //character's health & attack
	ll hm, dm; //monster's ---
	cin >> hc >> dc >> hm >> dm;

	ll k, w, a; //coin, weapon_upgrade, armor_upgrade
	cin >> k >> w >> a;

	ll maxArmor = k * a;
	hc += maxArmor;

	for (ll r = 0; r <= k; r++) {
		ll h_ch = hc - r * a;
		ll d_ch = dc + r * w;

		ll temp = (h_ch - 1) / dm; //how many attacks can be handled

		if (temp >= (hm - 1) / d_ch) {
			//character attacks first;
			//-1 to decrease attack with one because we didn't count the character's start_attack here (the trick)
			cout << "YES" << "\n";
			return;
		}
	}

	cout << "NO" << "\n";
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