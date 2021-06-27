#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	int count = 1;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ',') {
			count++;
		}
	}

	cout << count << "\n";
}