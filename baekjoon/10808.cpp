#include<iostream>
#include<string>
using namespace std;

int main() {
	int count[26] = { 0 };
	int check = 0;
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		check = str[i] - 97;
		count[check]++;
	}
	for (int i = 0; i < 26; i++) {
		cout << count[i] << " ";
	}


}