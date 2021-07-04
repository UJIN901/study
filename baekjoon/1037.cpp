#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	int count;

	cin >> count;
	int* div = new int[count];

	for (int i = 0; i < count; i++)
	{
		cin >> div[i];
	}

	sort(div, div + count);

	cout << div[0] * div[count - 1];

}