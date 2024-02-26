#include<iostream>
#include<string>
#include<array>
#include<vector>
#include<cmath>
#include<algorithm>

#define ll long long

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int test = 0; test < t; test++) {

		vector<ll>arr;
		int n;
		cin >> n;

		for (int r = 0; r < n; r++) {
			ll a;
			cin >> a;
			arr.push_back(a);
		}

		if (n < 3) {
			cout << 0 << "\n";
		}
		else {
			sort(arr.begin(), arr.end());

			ll sum = 0;
			ll choices = 0;
			ll count = 1;

			for (int r = arr.size() - 1; r > 0; r--) {

				if (arr[r] == arr[r - 1]) {
					count++;

					if (r == 1) {
						if (count == 1) {
							sum += choices;
						}
						else if (count == 2) {
							sum += count * choices;
							choices++;
						}
						else if (count > 2) {
							sum += count * choices;
							sum += count * (count - 1) * (count - 2) / 6;
							choices += count * (count - 1) / 2;
						}
					}
				}
				else {
					if (count == 1) {
						sum += choices;
					}
					else if (count == 2) {
						sum += count * choices;
						choices++;
					}
					else if (count > 2) {
						sum += count * choices;
						sum += count * (count - 1) * (count - 2) / 6;
						choices += count * (count - 1) / 2;
					}

					count = 1;

					if (r == 1) {
						sum += choices;
					}
				}
			}

			cout << sum << "\n";
		}
	}
}