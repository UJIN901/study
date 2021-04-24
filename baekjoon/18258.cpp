#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main() {
	cin.tie(0);
	cin.sync_with_stdio(0);
	queue<int> q;
	string str;
	int num;

	int count;
	cin >> count;
	while (count--) {
		cin >> str;
		if (str == "push") {
			cin >> num;
			q.push(num);
		}
		else if (str == "pop") {
				if (q.empty()) cout << "-1\n";
				else {
					cout << q.front() << "\n";
					q.pop();
				}
		}
		else if (str == "size") {
			cout << q.size() << "\n";
		}
		else if (str == "empty") {
			if (q.empty()) cout << "1\n";
			else cout << "0\n";
		}
		else if (str == "front") {
			if (q.empty()) cout << "-1\n";
			else cout << q.front() << "\n";
		}
		else {
			if (q.empty()) cout << "-1\n";
			else cout << q.back() << "\n";
		}
	}
}