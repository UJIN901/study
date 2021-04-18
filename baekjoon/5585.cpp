#include<iostream>
using namespace std;

void cal(int& money, int input, int& count) {
	while (true) {
		if (money >= input) {
			money = money - input;
			count++;
		}
		else break;
	}

}

int main() {
	int money, input, count = 0;
	cin >> money;
	money = 1000 - money;

	cal(money, 500, count);
	cal(money, 100, count);
	cal(money, 50, count);
	cal(money, 10, count);
	cal(money, 5, count);
	cal(money, 1, count);
	
	cout << count << endl;
}