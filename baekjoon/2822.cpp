#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int num, sum = 0, ex = 8;
	vector<pair<int, int>> v;
	vector<int> index;

	for (int i = 1; i <= ex; i++) {
		cin >> num;
		v.push_back(make_pair(num, i));
	}

	sort(v.begin(), v.end(), greater<pair<int, int>>());

	for (int i = 0; i < 5; i++) {
		sum += v[i].first;
		index.push_back(v[i].second);
	}

	cout << sum << "\n";

	sort(index.begin(), index.end());

	for (int i = 0; i < 5; i++) {
		cout << index[i] << " ";
	}
	
}