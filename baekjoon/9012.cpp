#include<iostream>
#include<string>
#include<stack>
using namespace std;

string sol(string str) {
	int size = str.size();
	stack<char> s;
	bool c = true;

	for (int i = 0; i < size; i++) {
		if (str[i] == '(') {
			s.push(str[i]);
		}
		else if (str[i] == ')') {
			if (!s.empty() && s.top() == '(') {
				s.pop();
			}
			else {
				c = false;
				break;
			}
		}
	}
	return (c && s.empty()) ? "YES" : "NO";
}

int main() {
	int T;
	string str;
	cin >> T;
	while (T--) {

		cin >> str;
		cout << sol(str) << "\n";
	}
}