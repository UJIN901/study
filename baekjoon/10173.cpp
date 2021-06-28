#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;

	while (getline(cin, str)) {
		if (str == "EOI") {
			return 0;
		}
		for (int i = 0; i < str.length(); i++) {
			str[i] = toupper(str[i]);
		}
		if (str.find("NEMO") != string::npos) {
			cout << "Found" << "\n";
		}
		else {
			cout << "Missing" << "\n";
		}
	}
}