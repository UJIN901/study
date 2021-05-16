#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T, num;
	string str;
	cin >> T;
	while (T--) {
		cin >> num >> str;
		int len = str.size();
		for (int i = 0; i < len; i++) {
			if (i == num - 1) {
				continue;
			}
			cout << str[i];
		}
		cout << "\n";
	}
}