#include<iostream>
using namespace std;

int main() {
	int A, B, num;
	cin >> A >> B;
	num = A - B;
	if (num > 0) cout << ">" << endl;
	if (num == 0) cout << "==" << endl;
	if (num < 0) cout << "<" << endl;
}