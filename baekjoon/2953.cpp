#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int people = 5;
	int a, b, c, d, sum = 0, win = 0, num;
	
	for (int i = 1; i <= people; i++) {
		cin >> a >> b >> c >> d;
		sum = a + b + c + d;
		if (sum > win) {
			win = sum;
			num = i;
		}
	}
	cout << num << " " << win;
}