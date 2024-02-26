#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <queue>
#include <algorithm>
#include <set> //used set for better insert, delete time

//needed a hint

#define ll long long

using namespace std;

ll attack[300009];
ll defence[300009];
ll lft[300009];
ll rght[300009];


void solve() {
	ll n;
	cin >> n;

	attack[0] = 0;
	defence[0] = 0;
	attack[n + 1] = 0;
	defence[n + 1] = 0;

	set<ll>prev;

	for (ll r = 1; r <= n; r++) {
		cin >> attack[r];
	}

	for (ll r = 1; r <= n; r++) {
		cin >> defence[r];

		lft[r] = r - 1;
		rght[r] = r + 1;
		//includes left & right array for later finding the attack value
		prev.insert(r);
		//this is remainder, will get updated
	}

	for (ll r = 1; r <= n; r++) {
		set<ll>delet;
		set<ll>tmp; // temporary set, later used to find the remainder

		for (auto j : prev) {
			if (defence[j] < attack[lft[j]] + attack[rght[j]]) {
				delet.insert(j);

				if (lft[j] > 0 && lft[j] <= n) {
					tmp.insert(lft[j]);
				}
				if (rght[j] > 0 && rght[j] <= n) {
					tmp.insert(rght[j]);
				}
			}
		}

		for (auto x : delet) {
			tmp.erase(x);
			lft[rght[x]] = lft[x];
			rght[lft[x]] = rght[x];
		}

		prev = tmp; //this the trick.
		//attacks that killed another monster is included here
		//later calculations, their left & right monsters will be included if they manage to kill a monster
		//only monsters that are killed are printed out, so no need for saving every remainder;
		//runtime error, when tried
		cout << delet.size() << " ";
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