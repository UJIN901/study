#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int count;
	cin >> count;

	while (count--) {
		string A, B;
		cin >> A >> B;

		cout << "Distances: ";

		for (int i = 0; i < A.length(); i++) {
			int x = A[i] - '0';
			int y = B[i] - '0';

			if (y >= x) {
				cout << y - x << " ";
			}
			else {
				cout << (y + 26) - x << " ";
			}
		}

		cout << "\n";

	}

}