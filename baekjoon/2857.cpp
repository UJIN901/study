#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int count = 0;
	vector<int> v;

	for (int i = 1; i <= 5; i++) {
		string str;
		cin >> str;
		if (str.find("FBI") != string::npos) {
			v.push_back(i);
			continue;
		}
		count++;
	}
	
	if (count == 5) {
		cout << "HE GOT AWAY!" << "\n";
	}
	else {
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
	}
}