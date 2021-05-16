#include<iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;

		int index = 0;
		while (N > 0) {
			if (N % 2 == 1) {
				cout << index << " ";
			}
			N /= 2;
			index++;
		}
		cout << "\n";
	}
}