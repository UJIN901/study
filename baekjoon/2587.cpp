#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int sum = 0, N = 5;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
		sum += v[i];
	}
	sum /= N;
	sort(v.begin(), v.end());

	cout << sum << "\n" << v[2];
}