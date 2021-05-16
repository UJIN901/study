#include<iostream>
#include<string>
using namespace std;

int main() {
	int num = 2;
	string A, B;
	cin >> A >> B;
	if (A[num] > B[num]) {
		for (int i = num; i >= 0; i--) {
			cout << A[i];
		}
	}
	else {
		for (int i = num; i >= 0; i--) {
			cout << B[i];
		}
	}
}