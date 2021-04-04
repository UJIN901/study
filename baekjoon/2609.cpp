#include<iostream>
using namespace std;

int main() {
	int a, b, tmp, ex;
	cin >> a >> b;

	if (b > a) {
		tmp = a;
		a = b;
		b = tmp;
	}

	ex = a * b;

	while (b != 0) {
		tmp = a % b;
		a = b;
		b = tmp;
	}

	cout << a << "\n" << ex / a << endl;
}