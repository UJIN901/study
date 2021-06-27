#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	
	while (getline(cin, str)) {
		int TEXT = 0, text = 0, number = 0, space = 0;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] >= 65 && str[i] <= 90) {
				TEXT++;
			}
			else if (str[i] >= 97 && str[i] <= 122) {
				text++;
			}
			else if (str[i] == ' ') {
				space++;
			}
			else {
				number++;
			}
		}
		cout << text << " " << TEXT << " " << number << " " << space << "\n";
	    
	}
}