//code:2577
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c,e;
	long long d = 0;
	int num[10] = { 0 };
	cin >> a >> b >> c;
	d = a * b * c;
	while (1)
	{
		e = d % 10;
		num[e]++;
		d = d / 10;
		if (d < 10)
		{
			e = d % 10;
			num[e]++;
			break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << "\n";
	}



	return 0;
}