#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int j, i, k, a = 0;
	cin >> a;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a-i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}