#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;
	cin.ignore();

	while (N--) {
		string s;
		getline(cin, s);
		if (s[0] >= 97) {
			s[0] = s[0] - 32;
		}
		cout << s << "\n";
	}
}