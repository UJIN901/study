#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] - 3 < 65) {
			str[i] = str[i] + 23;
		}
		else {
			str[i] = str[i] - 3;
		}
	}

	cout << str << "\n";
}