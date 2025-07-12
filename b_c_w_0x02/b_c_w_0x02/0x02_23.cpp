#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int j, i, k, a;
	cin >> a;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (k = 0; k < 2 * (a-i) -1; k++)
		{
			cout << "*";
		}

		cout << "\n";
	}
	return 0;
}