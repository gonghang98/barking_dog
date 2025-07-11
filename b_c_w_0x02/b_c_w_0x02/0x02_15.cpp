#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long a, b;
	long long c;
	long long low, high;
	cin >> a >> b;
	if (a > b)
	{
		low = b;
		high = a;
		c = high - low - 1;
	}
	else if (b > a)
	{
		low = a;
		high = b;
		c = high - low - 1;
	}
	else
		c = 0;
	cout << c<<"\n";
	for (long long i = 0; i < c; i++)
	{
		if(c!=0)
		cout << low + i+1 << " ";
	}
	return 0;
}