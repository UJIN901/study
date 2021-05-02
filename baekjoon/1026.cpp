#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int N, num, sum = 0;
	cin >> N;
	vector<int> A;
	vector<int> B;
	for (int i = 0; i < N; i++) {
		cin >> num;
		A.push_back(num);

	}
	for (int i = 0; i < N; i++) {
		cin >> num;
		B.push_back(num);
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	for (int i = 0; i < N; i++) {
		sum += A[i] * B[N - 1 - i];
	}
	cout << sum;

}