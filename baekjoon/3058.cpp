#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T, N = 7;

	cin >> T;

	while (T--) {
		vector<int> v(7);
		vector<int> list;
		int sum = 0;

		for (int i = 0; i < N; i++) {
			cin >> v[i];
			if (v[i] % 2 == 0) {
				list.push_back(v[i]);
				sum += v[i];
			}
		}
		sort(list.begin(), list.end());

		cout << sum << " " << list.front() << "\n";

	}
}