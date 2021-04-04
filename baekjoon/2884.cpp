#include<iostream>
using namespace std;
#define TIME 45
#define HOUR 24
#define MIN 60

int main() {
	int hour, min;
	cin >> hour >> min;
	if (min >= TIME) {
		min -= TIME;
		cout << hour << " " << min << endl;
	}
	else {
		min = min - TIME + MIN;
		if (hour != 0) {
			hour--;
		}
		else {
			hour--;
			hour += HOUR;
		}
		cout << hour << " " << min << endl;

	}
}