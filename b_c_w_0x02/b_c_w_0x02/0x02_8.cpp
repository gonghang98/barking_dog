#include <iostream>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c, temp =0;
	cin >> a >> b >> c;
	if (a < b && b>c)
	{
		if (a > c)
			cout << c << " " << a << " " << b << "\n";
		else 
			cout << a << " " << c << " " << b << "\n";
	}
	else if (a < c && c>b)
	{
		if (b > a)
			cout << a << " " << b << " " << c << "\n";
		else
			cout << b << " " << a << " " << c << "\n";
	}
	else if (b < a && a>c)
	{
		if (b > c)
			cout << c << " " << b << " " << a << "\n";
		else
			cout << b << " " << c << " " << a << "\n";
	}

	return 0;

}