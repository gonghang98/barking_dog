//code:1475
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a,b,e;
	int d = 0;
	int num[9] = { 0 };
	cin >> d;
	while (1)
	{
		e = d % 10;
		if (e != 9)
			num[e]++;
		else
			num[6]++;

		d = d / 10;
		if (d < 10)
		{
			e = d % 10;
			if (e != 9)
				num[e]++;
			else
				num[6]++;
			break;
		}
		
	}
	if (num[6] % 2 == 0)
	{
		num[6] = num[6] / 2;
	}
	else
	{
		num[6] = (num[6] + 1) / 2;
	}


	a = *max_element(num, num + 9);
	b = max_element(num, num + 9) - num;

	cout << a;




	return 0;
}