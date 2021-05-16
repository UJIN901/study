#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int num[1001] = { 0 }, tmp, result = 0, max = 0, mode = 0;

	for (int i = 0; i < 10; i++) {
		cin >> tmp;
		num[tmp]++;
		result += tmp;

		if (num[tmp] > mode)
		{
			max = tmp;
			mode = num[tmp];
		}
	}
	cout << result / 10 << "\n" << max << "\n";
}