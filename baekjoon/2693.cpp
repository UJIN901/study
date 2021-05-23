#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;
	while (T--) {
		vector<int> v(10);
		for (int i = 0; i < 10; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		cout << v[7] << "\n";
	}

}