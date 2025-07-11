#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a = 0;
	int b = 0, c = 0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		cout << b + c << "\n";
	}

	return 0;
}