#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int money;

	cin >> money;

	if ((money % 5) % 2 == 0) cout << money / 5 + money % 5 / 2 << endl;
	else if (money / 5 == 0) cout << "-1" << endl;
	else cout << money / 5 + (money % 5 + 5) / 2 - 1 << endl;
}