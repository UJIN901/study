#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string S;
	int asc = 32, N = 97;

	cin >> S;

	for (int i = 0; i < S.size(); i++) {
		if ((int)S[i] >= N) {
			cout << (char)((int)S[i] - asc);
		}
		else {
			cout << (char)((int)S[i] + asc);
		}
	}

}