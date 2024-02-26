#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <queue>
#include <algorithm>
#include <set>

#define ll long long

using namespace std;

const ll M = 200002;
const ll digits = 20;

ll arr[M][digits];

//need to calculate only once, and then can access everytime receiving new input
//calculated the amount of 1s corresponding to power-of-two
void precalculated() {

	for (ll r = 1; r < M; r++) {
		for (ll j = 0; j < digits; j++) {
			arr[r][j] = arr[r - 1][j] + ((r >> j) & 1);
		}
	}
} 

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	precalculated();

	int t;
	cin >> t;
	for (int test = 0; test < t; test++) {
		ll l, r;
		cin >> l >> r;

		ll maximum = 0;
		for (ll i = 0; i < digits; i++) {
			maximum = max(maximum, arr[r][i] - arr[l - 1][i]);
			//finds a power-of-two with the maximum amount of 1s
		}

		cout << r - l + 1 - maximum << "\n";
	}
}