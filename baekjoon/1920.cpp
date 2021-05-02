#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); 
	cin.tie(0);

	int N;
	cin >> N;
	vector<int> A(N);
	
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int M, X, count;
	cin >> M;

	while (M--) {
		cin >> X;
		count = 0;
		for (int i = 0; i < N; i++) {
			if (A[i] == X) {
				cout << 1 << "\n";
				break;
			}
			count++;
		}
		if (count == N) cout << 0 << "\n";

	}
}