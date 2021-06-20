#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	string str;
	int arr[26] = { 0 };
	int max = 0;
	int index = 0;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] < 97) {
			arr[str[i] - 65]++;
		}
		else {
			arr[str[i] - 97]++;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] > max) {
			max = arr[i];
			index = i;
		}
		else if (arr[i] == max && max != 0) {
			cout << "?" << "\n";
			return 0;
		}
	}
	cout << (char)(index + 65) << "\n";
}