#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;
	vector<int> vec(1000);

	int index = 0;
	
	for (int i = 1; i <= 1000; i++) {
		for (int j = 0; (j < i) && (index < 1000); j++) {
			vec[index++] = i;
		}
	}

	int sum = 0;

	for (int i = a - 1; i <= b - 1; i++) {
		sum += vec[i];
	}
	cout << sum;
}