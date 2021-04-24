#include<iostream>
#include<stack>
#include<string>
using namespace std;

string sol(string str) {
	int size = str.size();
	bool c = true;
	stack<char> s;

	for (int i = 0; i < size; i++) {
		if (str[i] == '(' || str[i] == '[') {
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
		else if (str[i] == ']') {
			if (!s.empty() && s.top() == '[') {
				s.pop();
			}
			else {
				c = false;
				break;
			}
		}
	}
	return (c && s.empty()) ? "yes" : "no";

}

int main() {
	string str = "";
	while (true) {
		getline(cin, str);
		if (str == ".") break;
		else {
			cout << sol(str) << "\n";
		}
	}
}