#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int B = 3, J = 2;

	vector<int> burger(B);
	vector<int> juice(J);

	for (int i = 0; i < B; i++) {
		cin >> burger[i];
	}

	for (int i = 0; i < J; i++) {
		cin >> juice[i];
	}

	sort(burger.begin(), burger.end());
	sort(juice.begin(), juice.end());

	cout << burger[0] + juice[0] - 50;
}