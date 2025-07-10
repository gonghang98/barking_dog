#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	int d, e, f;
	cin >> a >> b >> c;
	if (a == b)
	{
		if (b == c)
		{
			cout << 10000 + a * 1000;
		}
		else
		{
			cout << 1000 + a * 100;
		}
	}
	else if (b == c)
	{
		cout << 1000 + b * 100;
	}
	else if (a == c)
	{
		cout << 1000 + c * 100;
	}
	else
	{
		d = max({ a,b,c });
		cout << d * 100;
	}

	return 0;

}