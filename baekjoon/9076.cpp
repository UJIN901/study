#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T, N = 5, sum = 0;
	cin >> T;

	while (T--) {
		vector<int> v(N);

		for (int i = 0; i < N; i++) {
			cin >> v[i];
		}

		sort(v.begin(), v.end());

		if (v[3] - v[1] >= 4) {
			cout << "KIN\n";
		}
		else {
			sum = v[1] + v[2] + v[3];
			cout << sum << "\n";
		}
	}
}