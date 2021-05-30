#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N = 10, w_sum = 0, k_sum = 0;
	vector<int> W(N);
	vector<int> K(N);

	for (int i = 0; i < N; i++) {
		cin >> W[i];
	}
	
	for (int i = 0; i < N; i++) {
		cin >> K[i];
	}

	sort(W.begin(), W.end());
	sort(K.begin(), K.end());

	w_sum = W[7] + W[8] + W[9];
	k_sum = K[7] + K[8] + K[9];

	cout << w_sum << " " << k_sum;
}