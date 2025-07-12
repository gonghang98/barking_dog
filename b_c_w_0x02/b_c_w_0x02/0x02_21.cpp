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
		for (k = 0; k < i; k++)
		{
			if(k < a + 1)
			cout << " ";
		}
		for (j = 0; j < a - i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}