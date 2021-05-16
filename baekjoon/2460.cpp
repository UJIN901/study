#include<iostream>
using namespace std;

int main() {
	int count = 0, most = 0, in, out, T = 10;
	while (T--) {
		cin >> out >> in;
		count += in;
		count -= out;
		if (count > most) {
			most = count;
		}
	}
	cout << most;
}