#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T, N;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int result = 0;
		cin >> N;
		vector<int> vec(N);

		for (int j = 0; j < N; j++) {
			cin >> vec[j];
		}

		sort(vec.begin(), vec.end());

		for (int j = 1; j < N; j++) {
			result += (vec[j] - vec[j - 1]);
		}
		cout << result * 2 << "\n";

	}
}