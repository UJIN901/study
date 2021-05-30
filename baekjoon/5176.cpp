#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int K;
	cin >> K;

	while (K--) {
		int P, M, check, count = 0;
		cin >> P >> M;
		vector<int> v(M);
		for (int i = 0; i < P; i++) {
			cin >> check;
			if (v[check - 1] == 1) {
				count++;
			}
			else {
				v[check - 1] = 1;
			}
		}
		cout << count << "\n";
	}
}