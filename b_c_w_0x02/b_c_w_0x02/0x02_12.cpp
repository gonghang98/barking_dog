#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[7] = { 0 };
	int odd[7] = { 0 };
	int b = 0, c = 0, d = 0;
	for (int i = 0; i < 7; i++)
	{
		cin >> a[i];
		if (a[i] % 2 != 0)
		{
			odd[b++] = a[i];
			
		}
	}
	d = odd[0];
	if (b == 0)
		cout << -1;
	else
	{
		for (int i = 0; i < b; i++)
		{
			c += odd[i];
			if (d > odd[i])
			{
				d = odd[i];
			}
		}
		cout << c << "\n";
		cout << d << "\n";

	}

	return 0;

}