#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string KMP;

	cin >> KMP;

	for (int i = 0; i < KMP.size(); i++) {
		if (i == 0) {
			cout << KMP[i];
		}
		if (KMP[i] == '-') {
			cout << KMP[i + 1];
		}
	}
}