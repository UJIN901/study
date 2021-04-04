#include<iostream>
#include<vector>
#define NUM 100
using namespace std;

int main() {

	int test;
	cin >> test;

	while (test--) {
		vector<double> student;
		double sum = 0, ave = 0;
		int num;
		cin >> num;
		for (int i = 0; i < num; i++) {
			double score;
			cin >> score;
			sum += score;
			student.push_back(score);
		}
		sum /= (double)num;

		for (int i = 0; i < num; i++) {
			if (student[i] > sum) {
				ave++;
			}
		}

		ave /= (double)num;

		cout << fixed;
		cout.precision(3);
		cout << ave * 100 << "%" << endl;
	}
}