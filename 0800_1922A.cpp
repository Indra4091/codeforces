#include<iostream>
#include<string>
#include<array>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int test = 0; test < t; test ++) {
		int n;
		cin >> n;

		string a, b, c;
		cin >> a >> b >> c;

		bool check = false;

		for (int r = 0; r < n; r++) {
			if (a[r] == b[r]) {
				if (a[r] != c[r]) {
					check = true;
					break;
				}
			} 
			else {
				if (a[r] != c[r] && b[r] != c[r]) {
					check = true;
					break;
				}
			}
		}

		if (check == true) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}
}