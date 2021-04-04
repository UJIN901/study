#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int N, num;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[i] = num;
	}

	sort(arr, arr + N);

	for (int i = N-1; i >= 0; i--) {
		cout << arr[i] << endl;
	}
	
}