#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> v(8);
	vector<int> v_copy1(8);
	vector<int> v_copy2(8);

	for (int i = 0; i < 8; i++) {
		cin >> v[i];
		v_copy1[i] = v[i];
		v_copy2[i] = v[i];
	}

	sort(v_copy1.begin(), v_copy1.end());
	sort(v_copy2.rbegin(), v_copy2.rend());

	if (v == v_copy1) {
		cout << "ascending" << "\n";
	}
	else if (v == v_copy2) {
		cout << "descending" << "\n";
	}
	else {
		cout << "mixed" << "\n";
	}


}