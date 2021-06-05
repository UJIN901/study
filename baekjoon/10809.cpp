#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N = 26, asc = 97;

	vector<int> v(N, -1);

	string S;

	cin >> S;

	for (int i = 0; i < S.size(); i++) {
		if (v[(int)S[i] - asc] != -1) {
			continue;
		}
		v[(int)S[i] - asc] = i;
	}

	for (int i = 0; i < N; i++) {
		cout << v[i] << " ";
	}

}