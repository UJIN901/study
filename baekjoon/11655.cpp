#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;

	getline(cin, str);
	cin.clear();

	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			if (str[i] <= 77) {
				str[i] = str[i] + 13;
			}
			else {
				str[i] = str[i] - 13;
			}
		}
		else if (str[i] >= 97 && str[i] <= 122) {
			if (str[i] <= 109) {
				str[i] = str[i] + 13;
			}
			else {
				str[i] = str[i] - 13;
			}
		}
		else {
			;
		}
	}
	
	cout << str << "\n";
}