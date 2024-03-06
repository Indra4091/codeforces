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
	int n;
	cin >> n;

	int sum = 0;

	for (int r = 0; r < n; r++) {
		int a;
		cin >> a;
		sum += abs(a);
	}

	cout << sum << "\n";
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