#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T, sum = 0;
	cin >> T;

	vector<char> v(T);
	
	for (int i = 0; i < T; i++) {
		cin >> v[i];
		sum += v[i] - '0';
	}

	cout << sum;
}