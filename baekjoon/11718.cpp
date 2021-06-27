#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int count = 100;

	while (count--) {
		string str;
		getline(cin, str);
		cout << str << "\n";
		cin.clear();
	}



	
}