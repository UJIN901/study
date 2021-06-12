#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string X, Y, SUM;
	int rev_X, rev_Y, rev_SUM;
	
	cin >> X >> Y;

	reverse(X.begin(), X.end());
	reverse(Y.begin(), Y.end());
	rev_X = stoi(X);
	rev_Y = stoi(Y);

	rev_SUM = rev_X + rev_Y;
	SUM = to_string(rev_SUM);

	
	reverse(SUM.begin(), SUM.end());
	rev_SUM = stoi(SUM);
	cout << rev_SUM;


	
}