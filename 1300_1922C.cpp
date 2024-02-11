#include<iostream>
#include<string>
#include<array>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

// global variables
int r[100000] = { 0 };
int l[100000] = { 0 };
int arr[100000] = { 0 };

int main() {
	int test;
	cin >> test;
	for (int t = 0; t < test; t++) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			arr[i] = a;
		}

		for (int i = 0; i < n; i++) {
			if (i == 0) {
				r[i] = 0;
				l[n - 1 - i] = 0;
			}
			else if (i == 1) {
				r[i] = 1;
				l[n - 1 - i] = 1;
			}
			else {
				if (abs(arr[i - 1] - arr[i - 2]) > abs(arr[i - 1] - arr[i])) {
					r[i] = r[i-1] + 1;
				}
				else {
					r[i] = r[i-1] + abs(arr[i - 1] - arr[i]);
				}


				if (abs(arr[n - i] - arr[n - 1 - i]) > abs(arr[n + 1 - i] - arr[n - i])) {
					l[n - 1 - i] = l[n-i] + abs(arr[n - i] - arr[n - 1 - i]);
				}
				else {
					l[n - 1 - i] = l[n-i] + 1;
				}
			}
		}


		int m;
		cin >> m;
		for (int j = 0; j < m; j++) {
			int a, b;
			cin >> a >> b;

			if (a > b) {
				cout << l[b - 1] - l[a - 1] << "\n";
			}
			else {
				cout << r[b - 1] - r[a - 1] << "\n";
			}
		}
	}
}