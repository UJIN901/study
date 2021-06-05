#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, K, count = 0;

	cin >> N >> K;

	vector<int> n(N);

	for (int i = 0; i < N; i++) {
		cin >> n[i];
	}

	sort(n.rbegin(), n.rend());

	for (int i = 0; i < N; i++) {
		if (n[i] > K) {
			continue;
		}
		count += K / n[i];
		K %= n[i];
	}

	cout << count;

}