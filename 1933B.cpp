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

	int arr[3] = { 0 };
	int sum = 0;

	for (int r = 0; r < n; r++) {
		int a;
		cin >> a;

		int indx = a % 3;
		arr[indx]++;
		sum += indx;
	}

	if (sum % 3 == 0) {
		cout << 0 << "\n";
	}
	else if (sum % 3 == 1) {
		if (arr[1] != 0) {
			cout << 1 << "\n";
		}
		else {
			cout << 2 << "\n";
		}
	}
	else {
		cout << 1 << "\n";
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