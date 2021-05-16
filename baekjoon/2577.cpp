#include<iostream>
using namespace std;

int main() {
	int A, B, C;
	int count[10] = { 0 };
	cin >> A >> B >> C;
	
	int num = A * B * C;

	while (num != 0) {
		count[num % 10] += 1;
		num /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << count[i] << "\n";
	}
}