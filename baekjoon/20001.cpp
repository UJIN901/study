#include<iostream>
#include<string>
using namespace std;


int main() {
	cout << "������ ����� ����\n";
	int sum = 0;
	string str = "";
	while (true) {
		getline(cin, str);
		if (str == "������ ����� ��") {
			break;
		}
		else if (str == "����") {
			sum++;
		}
		else if (str == "������") {
			sum--;
		}
	}
	if (sum <= 0) {
		cout << "�������� �����\n";
	}
	else {
		cout << "����\n";
	}
}