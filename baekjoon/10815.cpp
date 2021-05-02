#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N, M, check, b;
	cin >> N;
	vector<int> S(N);
	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}
	cin >> M;
	while (M--) {
		cin >> check;
		b = 0;
		for (int i = 0; i < N; i++) {
			if (check == S[i]) {
				cout << "1 ";
				b = 1;
				break;
			}
		}
		if (b == 0) {
			cout << "0 ";
		}
	}
}