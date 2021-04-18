#include<iostream>
#include<stack>
using namespace std;

int main() {
	int n, num, check, sum = 0;
	cin >> n;
	stack<int> s;
	while (n--) {
		cin >> num;
		s.push(num);
	}
	cin >> check;
	while (!s.empty()) {
		if (check == s.top()) sum++;
		s.pop();
	}
	cout << sum << endl;
}