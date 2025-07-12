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
		for (k = 0; k < i; k++)
		{
				cout << " ";
		}
		for (j = 0; j < 2 * (a - i)-1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for (i = 0; i < a - 1; i++)
	{
		for (k = 0; k < a - i - 2; k++)
		{
			cout << " ";
		}
		for (j = 0; j < 2*(i+1)+1; j++)
		{
			cout << "*";
		}

		cout << "\n";
	}
	return 0;
}