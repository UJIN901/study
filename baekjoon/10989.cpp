#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(0);
	cin.sync_with_stdio(0);

	int N,input;
	cin >> N;
	vector<int> V(N);
	for (int i = 0; i < N; i++) {
		cin >> V[i];
	}
	cout << "\n";
	sort(V.begin(), V.end());
	for (int i = 0; i < N; i++) {
		cout << V[i] << "\n";
	}

}