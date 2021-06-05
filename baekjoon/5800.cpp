#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int K, N;
	cin >> K;
	for (int i = 1; i <= K; i++) {
		cin >> N;
		vector<int> v(N);
		for (int i = 0; i < N; i++) {
			cin >> v[i];
		}
		sort(v.rbegin(), v.rend());
		int gap = 0;
		for (int i = 0; i < N - 1; i++) {
			if (v[i] - v[i + 1] > gap) {
				gap = v[i] - v[i + 1];
			}
		}
		cout << "Class " << i << "\n";
		cout << "Max " << v.front() << ", Min " << v.back() << ", Largest gap " << gap << "\n";

	}
}