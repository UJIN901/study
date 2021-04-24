#include<iostream>
#include<string>
using namespace std;


int main() {
	cout << "고무오리 디버깅 시작\n";
	int sum = 0;
	string str = "";
	while (true) {
		getline(cin, str);
		if (str == "고무오리 디버깅 끝") {
			break;
		}
		else if (str == "문제") {
			sum++;
		}
		else if (str == "고무오리") {
			sum--;
		}
	}
	if (sum <= 0) {
		cout << "고무오리야 사랑해\n";
	}
	else {
		cout << "힝구\n";
	}
}